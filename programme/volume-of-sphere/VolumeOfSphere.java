// Write a program to compute the volume of a Sphere

import java.util.Scanner;

public class VolumeOfSphere {
	private static double computeSphereVolume(double r) {
		return r * r * r * 4 / 3 * Math.PI;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Radius : ");
		double r = sc.nextDouble();
		double vol = computeSphereVolume(r);
		System.out.printf("\nVolume : %.2f", vol);
		sc.close();
	}
}