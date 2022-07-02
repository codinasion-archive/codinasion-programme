// Write a program to compute the area of a rhombus

// Import the Scanner class
import java.util.Scanner;

public class AreaOfRhombus {

  public static void main(String[] args) {
    float diag1, diag2, area;
    Scanner diag = new Scanner(System.in);
    System.out.print("Diagonal 1 : ");
    diag1 = diag.nextInt();

    System.out.print("Diagonal 2 : ");
    diag2 = diag.nextInt();

    area = diag1 * diag2 / 2;
    System.out.println("");
    System.out.println("Area : " + area);

    diag.close();
  }
}
