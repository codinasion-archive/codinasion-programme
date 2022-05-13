// Write a program to add two numbers

import java.util.Scanner;

public class AddTwoNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;

        System.out.print("Enter two numbers to add : ");
        a = sc.nextInt();
        b = sc.nextInt();

        int sum = a + b;
        System.out.println("\nThe sum of numbers is : " + sum);

        sc.close();
    }
}
