// Write a Java programme to find cube of a number

import java.util.Scanner;

class CubeOfNumber {
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Input: ");
    double input = sc.nextDouble();
    System.out.println("Output: "+cube(input));
  }
  
  private static double cube(double num) {
    return Math.pow(num, 3);
  }
}
