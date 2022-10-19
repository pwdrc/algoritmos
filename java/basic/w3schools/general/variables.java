// syntax:
// type variableName = value;


public class Variables {
	public static void main(String[] args) {

	// String
	String name = "Pedro";
	System.out.println(name);

	// Number (int)
	int age = 26;
	System.out.println(age);

	// final variables -> prevent that values of existents variables be overwrited
	final int yearBirth = 1950;
	//int yearBirth = 10;
	System.out.println(yearBirth);


	// other types
	float otherNumber = 14.5f;
	char firstLetter = 'A';
	boolean trueOrFalse = true;
	System.out.println(otherNumber);
	System.out.println(firstLetter);
	System.out.println(trueOrFalse);

	// printing variables
	//Hello...
	System.out.println("Hello," + name);

	//Sum
	System.out.println(age + otherNumber);
	
	// declare multilple variables
	int x = 3, y = 4, z = 5;
	System.out.println(x + y - z);

	// one value to multiple variables
	x = y = z = 100;
	System.out.println(x + y + z);
	

	}
}
