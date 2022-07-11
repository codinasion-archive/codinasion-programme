// Write a programme to find volume of cone

import java.util.Scanner;

class VolumeOfCone {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Input radius : ");
    double radius = scanner.nextDouble();

    System.out.print("Input height : ");
    double height = scanner.nextDouble();

    System.out.println("\nvolume of cone : " + volCone(radius, height));

    scanner.close();
  }

  public static double volCone(double radius, double height) {
    return (
      Math.round(1.0 / 3 * Math.PI * Math.pow(radius, 2) * height * 100.0) /
      100.0
    );
  }
}
