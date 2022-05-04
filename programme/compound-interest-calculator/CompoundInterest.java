// Write a programme to calculate compound interest.
import java.util.Scanner;

public class CompoundInterest {
    public static void main(String args[]) {
        try (
                Scanner sc = new Scanner(System.in)) {
            // Input from User
            System.out.print("Enter Principle Amount : ");
            double p = sc.nextInt();
            System.out.print("Enter Time Period : ");
            double t = sc.nextInt();
            System.out.print("Enter Rate of Interest : ");
            double r = sc.nextInt();

            // output
            double amount = (double) (p * Math.pow(1 + (r / 100), t));
            System.out.println();
            System.out.println("Amount : " + Math.round(amount * 100.0) / 100.0);
            System.out.println("Compound Interest : " + Math.round((amount - p) * 100.0) / 100.0);
        }
    }
}
