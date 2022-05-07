
import java.io.IOException;
import java.util.Scanner;
import java.util.*;
public class MaximumOfNumbers {
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
         String input = sc.nextLine();
         String[] inputArr = input.split(" ");
         Integer[] numbers = new Integer[inputArr.length];
         for(int i = 0; i < numbers.length; i++)
         {
             numbers[i] = Integer.parseInt(inputArr[i]);
         }
         List<Integer> list = Arrays.asList(numbers);
         list.stream().reduce((x, y) -> x > y ? x : y).ifPresent(System.out::println);
         
    }
    
}
