/* program to calculate area of trapezoid */

import java.util.Scanner;

public class AreaOfTrapezoid {

    public static double area(double base1, double base2, double height) {
        return ((base1 + base2) / 2) * height;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Base 1 : ");
        double base1 = sc.nextDouble();
        System.out.print("Base 2 : ");
        double base2 = sc.nextDouble();
        System.out.print("Height : ");
        double height = sc.nextDouble();
        System.out.println("\nArea : " + area(base1, base2, height));
        sc.close();
    }
}
