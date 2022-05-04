// Write a programme to convert years to days
import java.util.Scanner;

public class YearsToDays {

	public static int yearToDays(int year) {

		return year * 365;
		// TODO ...maybe. Enhance to recalculate for leap-year.
	}

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Years : ");
		int years = sc.nextInt();
		System.out.println("Days  : " + yearToDays(years));
		sc.close();
	}

}
