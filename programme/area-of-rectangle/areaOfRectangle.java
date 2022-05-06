// Write a program to compute the area of a rectangle

import java.util.Scanner;

public class areaOfRectangle {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		// taking length input
		System.out.print("Enter the length  : ");
		int length = sc.nextInt();

		// taking breadth input
		System.out.print("Enter the breadth : ");
		int breadth = sc.nextInt();

		// calculating area of a rectangle
		int area = length * breadth;

		// printing the final answer
		System.out.println("\nArea of rectangle : " + area);

		sc.close();
	}
}
