// Write a programme to find square root of a number

import java.util.Scanner;

public class SquareRootOfNumber {
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Input : ");
    double input = sc.nextDouble();
    System.out.println("Output : " + squareRootOfNumber(input));
    sc.close();
  }
  
  private static double squareRootOfNumber(double num) {
    return Math.sqrt(num);
  }
}
