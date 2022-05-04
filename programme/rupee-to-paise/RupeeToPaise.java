
// Write a program to convert rupee to paise
import java.util.Scanner;

public class RupeeToPaise {
    public static void main(String args[]) {
        double paise;
        Scanner in = new Scanner(System.in); // will create a new Scanner instance which points to the input stream
                                             // passed as argument
        System.out.print("Please enter desired rupee amount for paise conversion : ");
        double rupees = in.nextDouble(); // scans the next token of the input as a Double
        paise = rupees * 100; // paise calculation
        System.out.println("\nTotal Rupees : " + rupees + " rupees \nTotal Paise  : " + (long) paise + " paise");
        in.close();
    }
}
