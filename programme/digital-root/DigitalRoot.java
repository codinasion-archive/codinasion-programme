// Converts a number to its digital root
// The digital root of a number is defined as the sum of each digit defining the original number
// example 127 -> 1 + 2 + 7 -> 10
//          10 -> 1 + 0 -> 1

import java.util.Scanner;

public class DigitalRoot {
    public static void convert(int a) {
        // Ramans formula for calcuating the digital root
        System.out.println(1 + (a - 1) % 9);
    }

    public static void main(String[] args) {
        int a = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Input  : ");
        a = sc.nextInt();
        System.out.print("\nThe digital root is : ");
        convert(a);
        sc.close();
    }
}
