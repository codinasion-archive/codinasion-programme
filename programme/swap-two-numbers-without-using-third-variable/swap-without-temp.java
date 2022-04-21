// Write a program to swap two numbers without using a third variable
import java.util.Scanner;

public class Swap {
    private static void swap(int a, int b) {
        System.out.println("\nNumbers before swap : " + a + " and " + b);
        a = a + b;
        b = a - b;
        a = a - b;
        System.out.println("\nNumbers after swap  : " + a + " and " + b);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int a = sc.nextInt();
        System.out.print("Enter another number : ");
        int b = sc.nextInt();

        swap(a, b);
        sc.close();
    }
}
