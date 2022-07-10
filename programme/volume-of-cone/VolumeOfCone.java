/*
Description:
    Write a programme to find volume of cone
    Volume of cone = 1/3 * π * (radius)^2 * height

Name: Krish Shah
*/
import java.util.Scanner;

class VolumeOfCone {

  public static void main(String[] args) {
    Scanner scanner  = new Scanner(System.in);

    System.out.print("radius : ");
    double radius = scanner.nextDouble();

    System.out.print("height : ");
    double height = scanner.nextDouble();

    System.out.println("\nvolume : " + volCone(radius, height));

    scanner.close();
  }

  public static double volCone(double radius, double height) {
    return 1.0/3 * Math.PI * Math.pow(radius, 2) * height;
  }
}
