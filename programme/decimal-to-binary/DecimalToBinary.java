// Write a programme to convert decimal number to binary
import java.util.Scanner;

public class DecimalToBinary {
    public static void convert(int a) {
        int k = 0;
        String s = "";
        while (a > 0) {
            k = (a % 2);
            s = s + k;
            a = a / 2;
        }
        for (int i = s.length() - 1; i >= 0; i--) {
            System.out.print(s.charAt(i));
        }
    }

    public static void main(String[] args) {
        int a = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Input  : ");
        a = sc.nextInt();
        System.out.print("Output : ");
        convert(a);
        System.out.println("");
        sc.close();
    }
}
