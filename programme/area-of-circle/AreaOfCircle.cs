using System;
public class AreaOfCircle 
{
	public static void Main(String[] args) {
		Console.WriteLine("Enter the radius : ");
		int r = int.Parse(Console.ReadLine());
		double area = Math.PI * r * r;
		double answer = Math.Round(area, 2);

		Console.WriteLine("Area of circle : " + answer);
	}
}
