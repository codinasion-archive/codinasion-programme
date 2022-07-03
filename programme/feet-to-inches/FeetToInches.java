// Write a programme to convert feet to inches
import java.util.Scanner;

class FeetToInches {

  public static void main(String[] args) {
    try (Scanner sc = new Scanner(System.in)) {
      System.out.print("Input  : ");
      int feet = sc.nextInt();
      System.out.print("Output : ");
      System.out.println(feet * 12);
    } catch (Exception e) {
      System.err.println("An Error occured");
    }
  }
}
