
// Write a program to print sum of digits.
import java.util.Scanner;

class SumOfDigits {
    public static void main(String[] args) {
        int num, d, sum = 0;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a number : ");
            num = sc.nextInt();
        }
        while (num != 0) {
            d = num % 10;
            sum = sum + d;
            num = num / 10;
        }
        System.out.println("Sum of the digits : " + sum);
    }
}
