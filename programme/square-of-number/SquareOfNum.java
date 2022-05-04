// Write a programme to print square of a number
import java.util.*;

public class SquareOfNum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // scanner class to take input
        System.out.print("Input  : ");
        int n = sc.nextInt();
        int squareOfn = n * n; // squaring n
        System.out.println("Output : " + squareOfn); // printing output
    }
}
