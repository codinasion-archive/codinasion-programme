// Write a programmeto swap two numbers
import java.util.Scanner;

public class Swap {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int a, b;

    System.out.print("Enter a : ");
    a = sc.nextInt();
    System.out.print("Enter b : ");
    b = sc.nextInt();

    int c = a;
    a = b;
    b = c;
    System.out.println("\nOutput after swapping :\na : " + a + "\nb : " + b);

    sc.close();
  }
}
