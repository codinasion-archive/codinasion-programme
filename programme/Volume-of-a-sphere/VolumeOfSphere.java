import java.util.Scanner;

public class VolumeOfSphere {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Radius : ");

        int radius = sc.nextInt(); // we are taking radius as Integer.

        double pi = Math.PI;

        double volumeSphere = (4.0 / 3) * pi * (radius * radius * radius);

        /*
         * To get floating point value we are using 4.0 / 3 instead of 4/3 because it
         * treated as Integer.
         */

        System.out.format("Volume : %.2f", volumeSphere);

    }
}