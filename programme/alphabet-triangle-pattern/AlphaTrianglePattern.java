// Write a program to print alphabet triangle pattern
import java.util.Scanner;

public class AlphaTrianglePattern {
    private static void pattern(int a) {
        System.out.print("Output :\n");
        for (int i = 1; i <= a; i++) {
            int c = 65;
            for (int k = a; k > i; k--) {
                System.out.print(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                if (j < i) {
                    System.out.printf("%c", c);
                    c++;
                } else {
                    System.out.printf("%c", c);
                    c--;
                }

            }
            System.out.print("\n");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input  : ");
        int a = sc.nextInt();
        pattern(a);
        sc.close();
    }

}
