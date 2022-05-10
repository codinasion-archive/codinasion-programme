import java.util.Scanner;

public class AddTwoNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;

        System.out.println("Enter two numbers to add: ");
        a = sc.nextInt();
        b = sc.nextInt();

        int sum = a + b;
        System.out.println("The sum is: " + sum);
    }
}
