/*
 * Java program to convert minutes to seconds
 * @author: Manan Karnik
 */

import java.util.Scanner;

public class MinutesToSeconds {
    // Static method to convert minutes to seconds
    public static int minutesToSeconds(int minutes) {
        return minutes * 60;
    }

    // Driver Code
    public static void main(String[] args) {
        // Accept input from user
        var input = new Scanner(System.in);
        System.out.print("Min: ");
        int minutes = input.nextInt();
        // Convert minutes to seconds
        int seconds = minutesToSeconds(minutes);
        // Print output
        System.out.println("Sec: " + seconds);
    }
}
