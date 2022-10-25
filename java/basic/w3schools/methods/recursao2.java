public class recursao2 {

	public static void main(String[] args) {
		int result = sum(5,10);
		System.out.println(result);
	}

	public static int sum(int start, int end) {
		if (start < end)
			return start + (sum(start + 1, end));
	 else return end;
	}
}
