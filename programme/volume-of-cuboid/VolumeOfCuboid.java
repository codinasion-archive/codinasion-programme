// Write a programme to compute the volume of a Sphere
import java.util.Scanner;

public class VolumeOfCuboid {

  private static double computeCuboitVolume(double l, double h, double w) {
    return l * h * w;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Length : ");
    double l = sc.nextDouble();

    System.out.print("Width  : ");
    double w = sc.nextDouble();

    System.out.print("Height : ");
    double h = sc.nextDouble();

    double vol = computeCuboitVolume(l, h, w);
    System.out.printf("\nVolume : %.2f\n", vol);

    sc.close();
  }
}
