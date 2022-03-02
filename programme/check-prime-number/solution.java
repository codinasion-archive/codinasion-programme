import java.util.*;

public class solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("\nEnter the number: ");
        int n = sc.nextInt();

        if (n == 0 || n == 1) {
            System.out.println(n + " is not a prime number");
        } else {
            int temp = 0;
            for (int i = 2; i < n / 2; i++) {
                if (n % i == 0) {
                    temp = 1;
                    break;
                }
            }

            if (temp == 1) {
                System.out.println(n + " is not a prime number");
            } else {
                System.out.println(n + " is a prime number");
            }
        }
        sc.close();
    }
}
