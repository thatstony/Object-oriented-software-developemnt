import java.util.ArrayList;

public class Freeer extends Player {

	private ArrayList<Entity> thisTeam;
	private Entity currentPlayerToFree;
	private int speed;
	
	public Freeer(Field f, int side, String name, int number, String team,
			char symbol, double x, double y) {
		super(f, side, name, number, team, symbol, x, y);
		currentPlayerToFree = null;
		if (side == 1)
			thisTeam = f.getTeam1();
		else
			thisTeam = f.getTeam2();
		speed = (int) (Math.random() * 5) + 4;
	}

	@Override
	public void play(Field field) {
		if (isInJail()) {
			speedX = 0;
			speedY = 0;
			return;
		}
		
		if (isCaught()) {
			return;
		}
		
		if (currentPlayerToFree == null) {
			for (Entity player : thisTeam) {
				if (player.isInJail() && !player.isBeingFreed()) {
					currentPlayerToFree = player;
					break;
				}
			}
		}
		
		if (currentPlayerToFree != null) {
			if (currentPlayerToFree.isInJail()) {
				currentPlayerToFree.setBeingFreed(true);
				double px = currentPlayerToFree.getX();
				double py = currentPlayerToFree.getY();
				speedX = (px - getX()) / TIME_SCALE / speed;
				speedY = (py - getY()) / TIME_SCALE / speed;
				if (field.freeTeammate((Player) this, (Player) currentPlayerToFree)) {
					currentPlayerToFree.setBeingFreed(false);
					currentPlayerToFree.setInJail(false);
					currentPlayerToFree.setCaught(false);
					currentPlayerToFree.setFreed(true);
					currentPlayerToFree = null;
					speedX = Math.random() * 4 - 2;
					speedY = Math.random() * 4 - 2;
					return;
				}
			}
		} else {
			if (x + getSprite().getWidth() >= field.maxX) {
				speedX *= -1;
			} else if (x <= field.minX) {
				speedX *= -1;
			} else if (y + getSprite().getHeight() >= field.maxY) {
				speedY *= -1;
			} else if (y <= field.minY) {
				speedY *= -1;
			} 
		}
	}

	@Override
	public void update(Field field) {

	}

}
