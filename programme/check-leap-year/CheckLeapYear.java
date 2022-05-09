import java.util.Scanner;

public class CheckLeapYear {

    public static String checkLeapYear(int year) {

        if (year % 4 == 0) return "Leap year";
        return "Not a leap year"
    }

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        System.out.print("Input: ");
        int year = scan.nextInt();
        checkLeapYear(year);
        scan.close();
    }
}