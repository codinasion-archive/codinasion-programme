// Write a programme to find area of right angle triangle
import java.util.*;

class RightTriangleArea {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // input base
        System.out.print("base : ");
        double base = sc.nextDouble();
        // input height
        System.out.print("height : ");
        double height = sc.nextDouble();
        // calculate height
        double area = 0.5 * base * height;
        // print output
        System.out.println("\narea : " + area);
    }
}
