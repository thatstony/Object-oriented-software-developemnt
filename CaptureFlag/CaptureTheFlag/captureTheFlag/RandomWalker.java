public class RandomWalker extends Player {

	
	public RandomWalker(Field f, int side, String name, int number, String team,
			char symbol, double x, double y) {
		super(f, side, name, number, team, symbol, x, y);
		this.speedX = Math.random() * 4 - 2;
		this.speedY = Math.random() * 4 - 2;
	}

	@Override
	public void play(Field field) {
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

	@Override
	public void update(Field field) {

	}

}
