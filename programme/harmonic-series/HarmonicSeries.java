// Write a programme to calculate the sum of following
// harmonic series for a given value of n

import java.util.Scanner;

class HarmonicSeries {

  public static void main(String[] args) {
    int n;
    try (Scanner sc = new Scanner(System.in)) {
      System.out.print("Input  : ");
      n = sc.nextInt();
    } catch (Exception e) {
      System.out.println("An Error occured while reading n");
      e.printStackTrace();
      System.out.println("Setting n=0 to trigger exception...");
      n = 0;
    }
    try {
      double sum = 0;
      for (int i = 1; i <= n; i++) {
        sum += (1.0 / i);
      }
      System.out.println(String.format("Output : %.5f", sum));
    } catch (Exception e) {
      System.out.println("An Error occured while calculation");
      e.printStackTrace();
    }
  }
}
