
// Write a program to print sum of square.
import java.util.*;

class SumOfSquare {

    public static int squaresum(int n) {
        return (n * (n + 1) / 2) * (2 * n + 1) / 3;
    }

    public static void main(String[] args) {
        try (// Input character
                Scanner sc = new Scanner(System.in)) {
            System.out.print("Input: ");
            int n = sc.nextInt();

            // output ASCII value
            System.out.println(squaresum(n));
        }
    }
}
