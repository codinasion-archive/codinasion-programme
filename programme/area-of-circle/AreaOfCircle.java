
// Write a programme to find the area of circle.
import java.util.Scanner;

public class AreaOfCircle {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the radius : ");

		// taking radius input
		int r = sc.nextInt();

		// calculating area of circle
		double area = Math.PI * r * r;

		// rounding the answer to 2 decimal places
		double answer = (double) Math.round(area * 100) / 100;

		// printing the final answer
		System.out.println("Area of circle : " + answer);

		sc.close();
	}
}
