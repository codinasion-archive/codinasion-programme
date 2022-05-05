// Write a program to check prime number
import java.util.*;

public class CheckPrime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("\nInput: ");
        int n = sc.nextInt();

        if (n == 0 || n == 1) {
            System.out.println("Output: Not prime number");
        } else {
            int temp = 0;
            for (int i = 2; i < n / 2; i++) {
                if (n % i == 0) {
                    temp = 1;
                    break;
                }
            }

            if (temp == 1) {
                System.out.println("Output: Not prime number");
            } else {
                System.out.println("Output: Prime number");
            }
        }
        sc.close();
    }
}
