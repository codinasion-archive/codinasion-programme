// Write a programme to get the factorial of a number
package programme.factorial;

import java.util.Scanner;

class Factorial {

  public static void main(String args[]) {
    try (// Input from User
    Scanner sc = new Scanner(System.in)) {
      System.out.print("Input: ");
      double number = sc.nextInt();

      // output
      int i, fact = 1;
      for (i = 1; i <= number; i++) {
        fact = fact * i;
      }
      System.out.println("Output: " + fact);

      sc.close();
    }
  }
}
