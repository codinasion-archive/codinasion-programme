import java.util.Scanner;

public class StringLength {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String input = scanner.next();
		System.out.println(input.length());
		scanner.close();
	}
}