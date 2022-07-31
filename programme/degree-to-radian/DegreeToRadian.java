// Write a programme to convert Degrees into Radians
import java.util.Scanner;

public class DegreeToRadian {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    // taking degrees input
    System.out.print("Enter the amount of Degrees  : ");
    int degree = sc.nextInt();

    // calculating degree to radian
    double radian = degree * ((Math.PI) / 180);

    // printing the final answer
    System.out.printf("\nAmount in radians = %.5f\n", radian);

    sc.close();
  }
}
