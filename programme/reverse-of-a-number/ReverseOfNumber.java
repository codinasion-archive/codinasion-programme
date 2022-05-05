// Write a program to print the reverse of a number
import java.util.Scanner;

public class ReverseOfNumber {
    public static void main(String[] args) {
        int a, n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Input  : ");
        a = sc.nextInt();
        System.out.print("Output : ");
        while (a > 0) {
            n = a % 10;
            System.out.print(n);
            a /= 10;
        }
        System.out.println();
        sc.close();
    }
}
