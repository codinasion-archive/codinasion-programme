// Write a programme to check even or odd string

import java.util.Scanner;

public class CheckEvenOrOddString {
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Input : ");
    String input = sc.nextLine();
    System.out.println("Output : " + checkEvenOrOddString(input) + " String");
    sc.close();
  }
  
  public static String checkEvenOrOddString(String input) {
    return (input.length() % 2 == 0) ? "Even" : "Odd";
  }
}
