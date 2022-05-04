// Write a programme to find the length of string
import java.util.Scanner;

public class StringLength {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter string : ");
        String input = scanner.next();
        System.out.println("\nLength of string : " + input.length());
        scanner.close();
    }
}
