// Write a program to get the factorial of a number

import java.util.Scanner;

class Factorial {
    public static void main(String args[]) {
        // Input from User
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        double number = sc.nextInt();

        // output
        int i, fact = 1;
        for (i = 1; i <= number; i++) {
            fact = fact * i;
        }
        System.out.println("Output: " + fact);
    }
}
