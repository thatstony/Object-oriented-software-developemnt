public class Chaser extends Player {

	private Player oppPlayer;
	
	public Chaser(Field f, int side, String name, int number, String team,
			char symbol, double x, double y, Player oppPlayer) {
		super(f, side, name, number, team, symbol, x, y);
		this.oppPlayer = oppPlayer;
	}

	@Override
	public void play(Field field) {
		double px = oppPlayer.getX();
		double py = oppPlayer.getY();
		speedX = (px - getX()) / TIME_SCALE / 2;
		speedY = (py - getY()) / TIME_SCALE / 2;
	}

	@Override
	public void update(Field field) {

	}

}
