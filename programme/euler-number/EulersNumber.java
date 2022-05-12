// Java program to compute the value of Euler's number

import java.util.Scanner;


public class EulersNumber {

    public static double eulersNumber(int n) {

       /* double e = 1;
        double factorial = 1;

        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
            e = e + 1 / factorial;
        }

        return e; */

        return Math.exp(n);
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        System.out.print("Input: ");
        int n = input.nextInt();
        System.out.println("Output: " + eulersNumber(n));
        input.close(); 
    }
}
