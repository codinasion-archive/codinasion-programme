// Write a programme to find perimeter of square
import java.util.Scanner;

class PerimeterOfSquare {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("side : ");
        int s = Integer.parseInt(sc.nextLine());
        s = 4 * s;
        System.out.println("\nPerimeter : " + s);
        sc.close();
    }
}
