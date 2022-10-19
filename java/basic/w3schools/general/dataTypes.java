/** a variable must be specified a data type
	data type are divided in two groups:

		* primitive data type: byte, short, int, long, double, float, boolean and char

		* non-primitive data type: String, Array and Classes 
**/

/** 
############# PRIMITIVE DATA TIPE ################

|	DATA TYPE	|	SIZE	|		DESCRIPTION		|
+---------------+-----------+-----------------------+
|	byte		|	1 byte 	|whole numbers -128/127	|
|	short		|	2 byte 	| w.n. -32768 to 32767	|
|	int			|	4 byte 	| w.n. -2,147,483,648 to 2,147,483,647| (lol)
|	long		|	8 byte 	| Stores whole numbers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 | (i don'y know what number is it)
|	float		|	4 byte 	| Fractional n. 6/7 d. d|
|	double		|	8 byte 	| == w. 17 decimal dig. |
|	boolean		| 	1 bit 	| true or false			|
|	char		|	2 byte  | single char/letter	|
+---------------+-----------+-----------------------+
**/

// char variables cans display certain characters with ASCII values:
public class Char {
	public static void main(String[] args) {
		char A = 65;
		char B = 66;
		char C = 67;
		System.out.println(A);
		System.out.println(B);
		System.out.println(C);
	}
}

/**
#################### NON PRIMITE DATA TYPE ########################
	- primitive data type are predefined in java
	= non-primitive data type are created by dev
	= non primitive can be used to call methods to perform certain operations
	= non primitive can be null
	- primitive data type starts with lowerCase
	= non primitive starts with UpperCase
**/	
