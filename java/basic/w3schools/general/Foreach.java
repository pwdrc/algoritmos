public class Foreach {
	public static void main (String[] args) {

		/* syntax:
		for (type variable : arrayName) {
			// code block to be executed
		} */

		String[] playlist = {"Tribe Called Quest", "Djonga", "NWA", "FBC", "Griselda"};

		for(String i : playlist) {
			System.out.println(i);
		}
	}
}
