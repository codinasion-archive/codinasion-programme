// Write a program to convert number to strings
import java.util.Scanner;

public class NumberToString {
    public static void main(String[] args) {
        String[] word = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
        Scanner sc = new Scanner(System.in);
        System.out.print("Input  : ");
        String a = sc.nextLine();
        System.out.print("Output : ");
        for (int i = 0; i < a.length(); i++) {
            System.out.print(word[(int) a.charAt(i) - 48] + " ");
        }
        System.out.println();
        sc.close();
    }
}
