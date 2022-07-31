// Write a programme to convert Radian to Degree
import java.util.Scanner;

public class RadianToDegree {

  public static double radianToDegree(int radian) {
    return Math.round((radian * 180.0 / Math.PI) * 10000) / 10000.0;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    // taking radians input
    System.out.print("Enter the amount of Radians  : ");
    int radian = sc.nextInt();

    // printing the answer
    System.out.printf("\nAmount in Degrees = %f\n", radianToDegree(radian));

    sc.close();
  }
}
