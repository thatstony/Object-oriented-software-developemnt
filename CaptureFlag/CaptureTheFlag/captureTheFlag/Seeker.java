public class Seeker extends Player {

	public Seeker(Field f, int side, String name, int number, String team,
			char symbol, double x, double y) {
		super(f, side, name, number, team, symbol, x, y);
		int[] a = f.getBase1Position();
		int[] b = f.getFlag2Position();
		if (side == 2) {
			b = f.getFlag1Position();
			a = f.getBase2Position();
		}
		speedX = (b[0] - a[0]) / TIME_SCALE / 4;
		speedY = (b[1] - a[1]) / TIME_SCALE / 4;
	}

	@Override
	public void play(Field field) {
		if (pickUpFlag(field)) {
			speedX = 0;
			speedY = 0;
		} else if (x + getSprite().getWidth() >= field.maxX 
				|| x <= field.minX
				|| y + getSprite().getHeight() >= field.maxY 
				|| y <= field.minY) {
			speedX = 0;
			speedY = 0;
		} 

	}

	@Override
	public void update(Field field) {

	}

}
