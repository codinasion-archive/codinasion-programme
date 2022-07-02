// Write a programme to convert inches to feet
import java.util.Scanner;

class InchesToFeet {

  public static void main(String[] args) {
    try (Scanner sc = new Scanner(System.in)) {
      System.out.print("Input  : ");
      int inches = sc.nextInt();
      System.out.print("Output : ");
      System.out.println(inches / 12.0);
    } catch (Exception e) {
      System.err.println("An Error occured");
    }
  }
}
