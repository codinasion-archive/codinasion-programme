// Write a program to check palindrome number
import java.util.*;

public class Palindrome {
    public static String checkPalindrome(int a) {
        int pal = 0, n;
        int original = a;
        while (a > 0) {
            n = a % 10;
            pal = pal * 10 + n;
            a = a / 10;
        }
        if (original == pal) {
            return "Palindrome number";
        }
        return "Not palindrome number";
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input  : ");
        int num = sc.nextInt();
        System.out.println("Output : " + checkPalindrome(num));
        sc.close();
    }
}
