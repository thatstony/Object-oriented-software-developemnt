public class Team {

	public Team(Field theField, int numFlagGetters, int numCatchers,
			int numFreeers, int numYourPlayer) {
		int side = 1;
		String name = "Cat van Kittenish";
		String team = "blues";
		char symbol = 'b';
		int x = 10;
		if (!theField.getTeam1().isEmpty()) {
			side = 2;
			name = "Bunny El-Amin";
			team = "reds";
			symbol = 'r';
			x = 410;
		}
		for (int i = 0; i < numFlagGetters; i++) {
			Seeker seeker = new Seeker(theField, side, name, 7, team, symbol, Math.random()*400+x, Math.random()*500+10);
		}
		for (int i = 0; i < numCatchers; i++) {
			Catcher catcher = new Catcher(theField, side, name, 7, team, symbol, Math.random()*400+x, Math.random()*500+10);
		}
		for (int i = 0; i < numFreeers; i++) {
			Freeer Freeer = new Freeer(theField, side, name, 7, team, symbol, Math.random()*400+x, Math.random()*500+10);
		}
		for (int i = 0; i < numYourPlayer; i++) {
			RandomWalker player = new RandomWalker(theField, side, name, 7, team, symbol, Math.random()*400+x, Math.random()*500+10);
		}
	}

}
