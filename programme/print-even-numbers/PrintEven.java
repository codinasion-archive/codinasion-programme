import java.util.Scanner;

public class PrintEven {
  public static int[] printEven(int num) {
      int[] arr = new int[num];
      int i = 0;
      while (i < num) {
          arr[i] = i * 2;
          i++;
      }
      return arr;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Input: ");
    int num = sc.nextInt();
    int[] arr = printEven(num);
    System.out.println("Output:");
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
    sc.close();
  }
}
