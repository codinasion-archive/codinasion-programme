// Write a programme to convert uppercase string to lowercase string.
import java.util.Scanner;

public class uppercaseToLowercase {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Input  : ");
    String s = sc.nextLine();

    System.out.println("Output : " + s.toLowerCase());

    sc.close();
  }
}
