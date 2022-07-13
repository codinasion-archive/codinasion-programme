// Write a programme to count capital letters in a string
import java.util.Scanner;

public class countCapitalLetters {

  public static void main(String args[]) {
    String str;
    int upper = 0;
    Scanner scan = new Scanner(System.in);
    System.out.print("Enter the String  : ");
    str = scan.nextLine();
    for (int i = 0; i < str.length(); i++) {
      char ch = str.charAt(i);
      if (ch >= 'A' && ch <= 'Z') {
        upper++;
      }
    }
    System.out.println("uppercase letters : " + upper);

    scan.close();
  }
}
