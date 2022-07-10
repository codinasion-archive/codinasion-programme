import java.util.Scanner;

class VolumeOfCube {
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Input : ");
    double input = sc.nextDouble();
    System.out.println("Output : " + volumeOfCube(input));
    sc.close();
  }
  
  private static double volumeOfCube(double num) {
    return Math.pow(num, 3);
  }
}
