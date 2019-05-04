import java.util.ArrayList;

public class Catcher extends Player {

	private ArrayList<Entity> oppTeam;
	private int currentPlayerToChase;
	private int side;
	private boolean caughtSomeone = false;
	private int speed;

	public Catcher(Field f, int side, String name, int number, String team,
			char symbol, double x, double y) {
		super(f, side, name, number, team, symbol, x, y);
		this.side = side;
		currentPlayerToChase = 0;
		if (side == 1)
			oppTeam = f.getTeam2();
		else
			oppTeam = f.getTeam1();
		speed = (int) (Math.random() * 5) + 4;
	}

	@Override
	public void play(Field field) {
		Entity oppPlayer = oppTeam.get(currentPlayerToChase);
		int[] j = field.getJail1Position();
		if (side == 2) {
			j = field.getJail2Position();
		}
		if ((oppPlayer instanceof Catcher)
				|| oppPlayer.isInJail()
				|| (!caughtSomeone 
						&& (!((Player) oppPlayer).pickUpFlag(field) && !(oppPlayer instanceof Seeker))
						&& !isOnCatcherSide(oppPlayer, field)
				|| (!caughtSomeone && oppPlayer.isCaught()))) {
			speedX = 0;
			speedY = 0;
			currentPlayerToChase++;
			currentPlayerToChase %= oppTeam.size();
		} else {
			if (caughtSomeone) {
				if (goneToJail(oppPlayer, j)) {
					caughtSomeone = false;
					oppPlayer.setInJail(true);
					currentPlayerToChase++;
					currentPlayerToChase %= oppTeam.size();
				}
			} else if (field.catchOpponent(this, (Player) oppPlayer)) {
				caughtSomeone = true;
				oppPlayer.setCaught(true);
				speedX = (j[0] - getX()) / TIME_SCALE / speed;
				speedY = (j[1] - getY()) / TIME_SCALE / speed;
				oppPlayer.setSpeedX(speedX, oppPlayer.id);
				oppPlayer.setSpeedY(speedY, oppPlayer.id);
			} else {
				double px = oppPlayer.getX();
				double py = oppPlayer.getY();
				speedX = (px - getX()) / TIME_SCALE / speed;
				speedY = (py - getY()) / TIME_SCALE / speed;
			}
		}

	}

	private boolean isOnCatcherSide(Entity oppPlayer, Field field) {
		if (side == 1) {
			if (oppPlayer.getX() < field.maxX / 2) {
				return true;
			}
		}
		if (side == 2) {
			if (oppPlayer.getX() > field.maxX / 2) {
				return true;
			}
		}
		return false;
	}

	@Override
	public void update(Field field) {

	}

	public boolean goneToJail(Entity player, int[] j) {
		return Math.hypot(player.getX() - j[0], player.getY() - j[1]) <= Field.ARMS_LENGTH;
	}

}
