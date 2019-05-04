public class Stopping extends Player {

	public Stopping(Field f, int side, String name, int number, String team,
			char symbol, double x, double y) {
		super(f, side, name, number, team, symbol, x, y);
		this.speedX = Math.random() * 4 - 2;
		this.speedY = Math.random() * 4 - 2;
	}

	@Override
	public void play(Field field) {
		if (x + getSprite().getWidth() >= field.maxX || x <= field.minX
				|| y + getSprite().getHeight() >= field.maxY || y <= field.minY) {
			speedX = 0;
			speedY = 0;
		}
	}

	@Override
	public void update(Field field) {

	}

}
