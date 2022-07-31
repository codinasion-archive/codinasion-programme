// Write a programmeto check armstrong number
import java.util.Scanner;

public class ArmstrongNumber {

  private static String isArmstrong(int num, int length) {
    int sum = 0;
    for (int currNum = num; currNum != 0; currNum /= 10) {
      sum += Math.pow(currNum % 10, length);
    }
    return sum == num ? "armstrong number" : "not armstrong number";
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter an integer : ");
    int num = sc.nextInt();
    int length = String.valueOf(num).length();
    System.out.println("\nOutput : " + isArmstrong(num, length));
    sc.close();
  }
}
