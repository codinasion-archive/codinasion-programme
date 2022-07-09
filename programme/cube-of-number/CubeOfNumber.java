// Write a Java programme to find cube of a number

import java.util.Scanner;

class CubeOfNumber {
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter number: ");
    double input = sc.nextDouble();
    System.out.println("=== Output ===");
    System.out.println("(" + input + ")^3 = " + cube(input));
  }
  
  private static double cube(double num) {
    return Math.pow(num, 3);
  }
}
