// Write a program to compute the volume of a Cylinder

import java.util.Scanner;

public class volumeOfCylinder {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // taking radius input
        System.out.print("Enter the radius : ");
        int r = sc.nextInt();

        // taking height input
        System.out.print("Enter the height : ");
        int h = sc.nextInt();

        // calculating Volume of cylinder
        double volume = Math.PI * r * r * h;

        // rounding the answer to 2 decimal places
        double answer = (double) Math.round(volume * 100) / 100;

        // printing the final answer
        System.out.println("\nVolume of cylinder : " + answer);

        sc.close();

    }
}
