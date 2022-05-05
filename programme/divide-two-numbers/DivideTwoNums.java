// Write a programme to divide two numbers
import java.util.Scanner;

public class DivideTwoNums {

    public static double divide(int num1, int num2) {
        // if divisor is 0
        if (num2 == 0) {
            System.out.println("Division by 0 is not allowed");
            return -1;
        }
        return (double) num1 / (double) num2;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input the Dividend : ");
        int num1 = sc.nextInt();
        System.out.print("Input the Divisor  : ");
        int num2 = sc.nextInt();

        // divide two numbers
        double result = divide(num1, num2);

        System.out.printf("\nOutput : %.1f\n", result);

    }
}
