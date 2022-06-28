// A program to check if the entered digit is even or odd

import java.util.Scanner;

public class EvenOrOdd {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int num;

    System.out.print("Enter the number : ");
    num = sc.nextInt();

    if (num % 2 == 0) System.out.println(
      "\nOutput : Even Number"
    ); else System.out.println("\nOutput : Odd Number");

    sc.close();
  }
}

// // using bitwise AND operator(Optimized method)
// import java.util.Scanner;
// public class BetterEvenOrOdd {
//   public static void main(String[] args) {
//     Scanner sc = new Scanner(System.in);
//     int num;
//     System.out.print("Enter the number : ");
//     num = sc.nextInt();
//     if ((num & 1) == 1) {
//       System.out.println("\nOutput : Odd Number");
//     } else {
//       System.out.println("\nOutput : Even Number");
//     }
//     sc.close();
//   }
// }
