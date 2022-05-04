// Write a programme to subtract two numbers
import java.util.*;

public class SubtractTwoNums {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input  : ");
        // Input 2 numbers
        int a = sc.nextInt();
        int b = sc.nextInt();
        // Print difference
        System.out.println("Output : " + (a - b));
        sc.close();
    }
}
