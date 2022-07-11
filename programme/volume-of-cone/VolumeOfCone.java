// Write a programme to find volume of cone

import java.util.Scanner;

public class VolumeOfCone {
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Input radius : ");
    double radius = sc.nextDouble();
    System.out.print("Input height : ");
    double height = sc.nextDouble();
    System.out.println("Output : " + String.format("%.5f", volumeOfCone(radius, height)));
    sc.close();
  }
  
  private static double volumeOfCone(double radius, double height) {
    return 1 / 3d * Math.PI * Math.pow(radius, 2) * height;
  }
}
