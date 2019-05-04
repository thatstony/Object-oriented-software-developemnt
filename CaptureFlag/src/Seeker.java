public class Seeker extends Player {

	private int side;
	private int speed;
	
	public Seeker(Field f, int side, String name, int number, String team,
			char symbol, double x, double y) {
		super(f, side, name, number, team, symbol, x, y);
		int[] a = f.getBase1Position();
		int[] b = f.getFlag2Position();
		this.side = side;
		if (side == 2) {
			b = f.getFlag1Position();
			a = f.getBase2Position();
		}
		speed = (int) (Math.random() * 5) + 4;
		speedX = (b[0] - a[0]) / TIME_SCALE / speed;
		speedY = (b[1] - a[1]) / TIME_SCALE / speed;
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
		
		if (field.isInBase(this) && pickUpFlag(field)) {
			speedX = 0;
			speedY = 0;
			return;
		}
		
		if (pickUpFlag(field)) {
			int[] a = null;
			if (side == 1) {
				a = field.getBase1Position();
				field.flag2.setX(getX(), field.flag2.id);
				field.flag2.setY(getY(), field.flag2.id);
			} else if (side == 2) {
				a = field.getBase2Position();
				field.flag1.setX(getX(), field.flag1.id);
				field.flag1.setY(getY(), field.flag1.id);
			}
			speedX = (a[0] - getX()) / TIME_SCALE / speed;
			speedY = (a[1] - getY()) / TIME_SCALE / speed;
			
		} else if (x + getSprite().getWidth() >= field.maxX
				|| x <= field.minX
				|| y + getSprite().getHeight() >= field.maxY 
				|| y <= field.minY) {
			speedX = 0;
			speedY = 0;
		} else {
			int[] b = field.getFlag2Position();
			if (side == 2) {
				b = field.getFlag1Position();
			}
			speed = (int) (Math.random() * 5) + 4;
			speedX = (b[0] - getX()) / TIME_SCALE / speed;
			speedY = (b[1] - getY()) / TIME_SCALE / speed;
		}

	}

	@Override
	public void update(Field field) {

	}

}
