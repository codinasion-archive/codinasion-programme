// Write a program to print the Fibonacci series for 'n' numbers
import java.util.Scanner;

class FibonacciRecursion {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();

        System.out.print("Fibonacci Series :");
        for (int i = 0; i <= num; i++) {
            System.out.print(" " + fibo(i));
        }
        System.out.println();
    }

    static int fibo(int num) {
        if (num < 2) {
            return num;
        }
        return fibo(num - 1) + fibo(num - 2);
    }
}
