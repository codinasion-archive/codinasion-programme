// Computes the perimeter of a rectangle

import java.util.Scanner;

class PerimeterOfRectangle {
    public static void main(String[] args) {
        double length, breadth = 0.0;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter length  : ");
            length = sc.nextDouble();
            System.out.print("Enter breadth : ");
            breadth = sc.nextDouble();
        }
        double perimeter = 2 * (length + breadth);
        System.out.println("\nPerimeter : " + perimeter);
    }
}
