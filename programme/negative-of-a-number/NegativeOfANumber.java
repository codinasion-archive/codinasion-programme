// Write a programme to find negative of a number

import java.util.Scanner;

public class NegativeOfANumber {

  public static double getOpposite(double number) {
    return number *= -1;
  }

  public static void main(String[] args) {
    var sc = new Scanner(System.in);
    System.out.print("Input  : ");
    double number = sc.nextDouble();
    sc.close();
    System.out.println("Output : " + getOpposite(number));
  }
}
