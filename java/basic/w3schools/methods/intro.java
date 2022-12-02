// METHOD is a block of code which only runs when it is called


/*
	CREATION
	A METHOD must be declared within (inside) a CLASS!!!
	example:

	public class Main {
		static void myMethod() {
		// code	
	}
}
*/

// static: means that the method belongs to the Main class and not an object of the Main class

// void: means that method does not return any value

/* 
	CALL A METHOD
	To call a method in Java:
*/
public class intro {
	static void myMethod() {
		System.out.println("Hello World");
	}

	public static void main(String[] args) {
		myMethod();
	}
	
}
