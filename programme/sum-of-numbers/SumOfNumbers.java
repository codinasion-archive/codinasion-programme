// Write a programme to find sum of n numbers
import java.util.*;

class SumOfNumbers {

  public static void main(String[] args) {
    try (Scanner inp = new Scanner(System.in)) {
      System.out.print("Enter Number of Numbers to be Calculated : ");
      int n = inp.nextInt();
      int i, sum = 0, z;

      for (i = 0; i < n; i++) { //Entering N numbers
        System.out.print("Enter: ");
        z = inp.nextInt();
        sum = sum + z; //Cumulative Sum
      }

      System.out.println("\nSum of the numbers: " + sum);
    }
  }
}
