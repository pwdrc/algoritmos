// Type casting is when you assign a value of one PRIMITIVE
// data type with ANOTHER TYPE

// ### AUTOMATIC ###
// - (widening casting - smaller type to a larger type size)
// byte -> short -> char -> int -> long -> float -> double

// ### MANUALLY ###
// - narrowing casting (larger type to a smaller size type)
// double -> float -> long -> int -> char -> short -> byte

// Ex.:

public class Casting {
    public static void main(String[] args) {

        // automatic
        int myInt = 10;
        double myDouble = myInt;
        System.out.println(myInt); // 9
        System.out.println(myDouble); // 9.0

        //manually
        double otherDouble = 10.10d;
        int otherInt = (int) otherDouble;
        System.out.println(otherDouble); // 10.10
        System.out.println(otherInt); // 10
    }
}