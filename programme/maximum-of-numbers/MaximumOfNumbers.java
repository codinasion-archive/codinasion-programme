// Write a programme to print the maximum of given numbers
import java.util.*;
import java.util.Scanner;

public class MaximumOfNumbers {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter numbers : ");
    String input = sc.nextLine();

    String[] inputArr = input.split(" ");
    Integer[] numbers = new Integer[inputArr.length];
    for (int i = 0; i < numbers.length; i++) {
      numbers[i] = Integer.parseInt(inputArr[i]);
    }
    List<Integer> list = Arrays.asList(numbers);

    System.out.print("\nMaximum Number : ");
    list
      .stream()
      .reduce((x, y) -> x > y ? x : y)
      .ifPresent(System.out::println);
    sc.close();
  }
}
