// Write a programme to check leap year

import java.util.Scanner;

public class CheckLeapYear {

  public static String checkLeapYear(int year) {
    if (year % 4 == 0) {
      if (year % 100 == 0) {
        if (year % 400 == 0) {
          return "The year is a leap year";
        } else {
          return "The year is not a leap year";
        }
      } else {
        return "The year is a leap year";
      }
    } else {
      return "The year is not a leap year";
    }
  }

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    System.out.print("Input  : ");
    int year = scan.nextInt();
    System.out.println("Output : " + checkLeapYear(year));
    scan.close();
  }
}
