// Write a programme to print ASCII Value of a character.
import java.util.Scanner;

public class ASCIIValue {
    public static void main(String args[]) {
        // Input character
        System.out.print("Enter character: ");
        Scanner sc = new Scanner(System.in);
        char chr = sc.next().charAt(0);

        // output ASCII value
        int asciiValue = chr;
        System.out.println("ASCII value: " + asciiValue);
    }
}  
