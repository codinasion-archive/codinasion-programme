// Write a program to print the minimum of given numbers
import java.util.*;
import java.util.stream.Collectors;

class MinOfNumbers {
    public static void main(String[] args) {
        // Input numbers
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter numbers: ");
        String l = sc.nextLine();

        // Output minimum number
        List<Integer> ints = Arrays.stream(l.split(" "))
                .map(Integer::parseInt)
                .collect(Collectors.toList());
        System.out.println("Minimum: " +  Collections.min(ints));
    }
}
