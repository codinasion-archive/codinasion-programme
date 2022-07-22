// Write a programme to find index of an alphabet
import java.util.*;

class IndexOfAlphabet {

  public static void main(String args[]) {
    System.out.print("Input  : ");
    Scanner sc = new Scanner(System.in);
    char c = sc.next().charAt(0);
    if (Character.isLowerCase(c)) {
      System.out.println("Output : " + (c - 96));
    } else {
      System.out.println("Output : " + (c - 64));
    }

    sc.close();
  }
}
