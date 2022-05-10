// Write a programme to calculate simple interest

import java.util.Scanner;

public class SimpleInterestCalculator {

    public static int interestCalculator(int principle, int time, int rate) {
        int interest = (principle * time * rate) / 100;
        return interest;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter P : ");
        int principle = sc.nextInt();
        System.out.print("Enter T : ");
        int time = sc.nextInt();
        System.out.print("Enter R : ");
        int rate = sc.nextInt();
        int interest = interestCalculator(principle, time, rate);
        System.out.println("\nSimple interest: " + interest);
        sc.close();
    }
}
