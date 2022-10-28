/* 
1 CLASS CREATION
		To create a class in java, use the keyword "class":
		_____
			public class Main {
				int x = 5;
			}
		-----
		
2 OBJECT CREATION:
		In java, objects are created from a class.
		To create an object of Main, specify the class name followed by the object name and use the keyword new:
		_____
		public class Main {
			int x = 5;

			public static void main(String[] args) {
				Main myObj = new Main();
				System.out.println(myObj.x);
			}
		}		
*/

public class create {
	int x = 5;

	public static void main(String[] args) {
		create myObj = new create();
		System.out.println(myObj.x);
	}
}
