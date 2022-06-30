using System;

public class AreaOfRightAngleTriangle
{
	public static void Main()
	{
		Console.Write("base : ");
		int triangleBase = int.Parse(Console.ReadLine());
		Console.Write("height : ");
		int triangleHeight = int.Parse(Console.ReadLine());
		
		int area = CalculateArea(triangleBase, triangleHeight);
		Console.WriteLine("area : " + area);
	}

	public static int CalculateArea(int triangleBase, int triangleHeight)
	{
		var area = 0.5 * triangleBase * triangleHeight;
		return (int)area;
	}
}
