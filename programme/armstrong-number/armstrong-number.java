// Write a program to check armstrong number

import java.util.Scanner;

public class Armstrong {
    private static String isArmstrong(int num) {
        int sum = 0;
        for (int currNum = num; currNum != 0; currNum /= 10) {
            sum += Math.pow(currNum % 10, 3);
        }
        return sum == num ? "armstrong number" : "not armstrong number";
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter an integer: ");
        int num = sc.nextInt();
        System.out.println(isArmstrong(num));
        sc.close();
    }
}
