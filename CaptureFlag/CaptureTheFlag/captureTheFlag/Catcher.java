import java.util.ArrayList;

public class Catcher extends Player {

	private ArrayList<Entity> oppTeam;
	private int currentPlayerToChase;
	private int side;
	private boolean caughtSomeone = false;
	
	public Catcher(Field f, int side, String name, int number, String team,
			char symbol, double x, double y) {
		super(f, side, name, number, team, symbol, x, y);
		this.side = side;
		currentPlayerToChase = 0;
		if (side == 1)
			oppTeam = f.getTeam2();
		else
			oppTeam = f.getTeam1();
	}

	@Override
	public void play(Field field) {
		Entity oppPlayer = oppTeam.get(currentPlayerToChase);
		int[] j = field.getJail1Position();
		int[] b = field.getBase2Position();
		if (side == 2) {
			j = field.getJail2Position();
			b = field.getBase1Position();
		}
		if (caughtSomeone) {
			if (goneToJail(oppPlayer, j)) {
				caughtSomeone = false;
				oppPlayer.setX(b[0], oppPlayer.id);
				oppPlayer.setY(b[1], oppPlayer.id);
				oppPlayer.setSpeedX(Math.random() * 4 - 2, oppPlayer.id);
				oppPlayer.setSpeedY(Math.random() * 4 - 2, oppPlayer.id);
				currentPlayerToChase++;
				currentPlayerToChase %= oppTeam.size();
			}
		} else if (field.catchOpponent(this, (Player) oppPlayer)) {
			caughtSomeone = true;
			speedX = (j[0] - getX()) / TIME_SCALE / 4;
			speedY = (j[1] - getY()) / TIME_SCALE / 4;
			oppPlayer.setSpeedX(speedX, oppPlayer.id);
			oppPlayer.setSpeedY(speedY, oppPlayer.id);
		} else {
			double px = oppPlayer.getX();
			double py = oppPlayer.getY();
			speedX = (px - getX()) / TIME_SCALE / 4;
			speedY = (py - getY()) / TIME_SCALE / 4;
		}
				
	}

	@Override
	public void update(Field field) {

	}

	public boolean goneToJail(Entity player, int[] j) {
		return Math.hypot(player.getX() - j[0], player.getY() - j[1]) <= Field.ARMS_LENGTH;
	}
	
}
