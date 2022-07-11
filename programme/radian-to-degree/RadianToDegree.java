// Write a program to convert Degrees into Radians
import java.util.Scanner;

public class RadianToDegree {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // taking degrees input
        System.out.print("Enter the amount of Radians  : ");
        int radian = sc.nextInt();

        // calculating degree to radian
        double degree = radian * (180/(Math.PI));

        // printing the final answer
        System.out.println("\nAmount in Degrees = " + degree);

        sc.close();
    }
}