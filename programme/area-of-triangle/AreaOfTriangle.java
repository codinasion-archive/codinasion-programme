// Write a programme to find area of triangle
package com.company;

import java.util.Scanner;

public class AreaOfTriangle {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a : ");
        int a = sc.nextInt();

        System.out.print("Enter b : ");
        int b = sc.nextInt();

        System.out.print("Enter c : ");
        int c = sc.nextInt();

        area(a, b, c);

        sc.close();

    }

    public static int area(int a, int b, int c) {

        int s = (a + b + c) / 2;

        int area = (int) Math.sqrt(s * (s - a) * (s - b) * (s - c));
        System.out.println("\nArea of triangle : " + area);
        return area;

    }

}
