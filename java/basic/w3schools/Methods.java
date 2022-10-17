public class Methods {
	public static void main (String[] args) {

		// STRINGS	
		// length
		String djonga = "Fogo nos racistas!";
		System.out.println("\"Fogo nos racistas\" tem " + djonga.length() + " caracteres.");

		// toUpperCase and toLowerCase
		System.out.println("toUpperCase:");
		System.out.println(djonga.toUpperCase());
		System.out.println(" ");
		System.out.println("toLowerCase:");
		System.out.println(djonga.toLowerCase());

		// indexOf() : finding a character in a string
		System.out.println("Where is \"!\" in \"Fogo nos racistas!\"?");
		System.out.println(djonga.indexOf("!"));

		// MATH
		// min and max
		int min = -50;
		int max = 30;
		System.out.println("The min between " + min + "and " + max + " is: " + Math.min(min,max));
		System.out.println("... so, max is: " + Math.max(min,max));

		// sqrt
		System.out.println("A raiz quadrada de " + max + " é: " + Math.sqrt(max));

		// modulo (abs)
		System.out.println("O módulo de " + min + " é: " + Math.abs(min));

		// random numbers
		System.out.println("Random 0 to 1: " + Math.random());
		int randNumb = (int) (Math.random() * 101);
		System.out.println("Random 0 to 100: " + randNumb);
	}
}
