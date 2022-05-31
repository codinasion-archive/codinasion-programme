// Write a programme to check Pangram sentence

import java.util.HashMap;
import java.util.Scanner;

public class PangramChecker {

	public static void main(String[] args) {
		String alphabet = "abcdefghijklmnopqrstuvwxyz";
		HashMap<Character, Boolean> letters = new HashMap<Character, Boolean>();
		boolean pangram = true;
		Scanner sc = new Scanner(System.in);

		// read input
		System.out.print("Input  : ");
		String input = sc.nextLine();

		// convert string to lower case
		input = input.toLowerCase();

		// iterate for each character in input
		for (int i = 0; i < input.length(); i++) {
			letters.put(input.charAt(i), true);
		}

		// iterate to check if every alphabet character is in the hashmap
		for (int i = 0; i < alphabet.length(); i++) {
			// if an alphabet character is missing then set pangam to false
			if (letters.get(alphabet.charAt(i)) == null) {
				pangram = false;
			}
		}

		System.out.print("Output : ");
		System.out.println(pangram ? "Pangram Sentence" : "Not a pangram sentence");

		sc.close();
	}
}
