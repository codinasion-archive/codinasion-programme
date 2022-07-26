// Write a programme to convert lowercase string to uppercase string
import java.util.Scanner;

public class LowerCaseToUppercase {

  private static String lowerCaseToUpperCase(String lowercase) {
    return lowercase.toUpperCase();
  }

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter string : ");
    String input = scanner.next();
    System.out.println(
      "\nString to uppercase : " + lowerCaseToUpperCase(input)
    );
    scanner.close();
  }
}
