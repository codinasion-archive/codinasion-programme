import java.util.Scanner;

public class Divide_two_numbers {

    public static double Divide(int num1, int num2) {
        // if divisor is 0
        if (num2 == 0) {
            System.out.println("Division by 0 is not allowed");
            return -1;
        }
        return (double) num1 / (double) num2;
    }

    public static void main(String[] args) {
        System.out.print("Input: ");
        Scanner sc = new Scanner(System.in);
        // taking input from the user
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();

        // here divide two numbers
        double result = Divide(num1, num2);

        System.out.printf("%.1f", result);

    }
}
