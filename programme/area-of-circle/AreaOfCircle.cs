// Write a programme to find the area of circle
using System;

public class AreaOfCircle
{
    public static void Main(String[] args)
    {
        Console.Write("Enter the radius : ");
        int r = int.Parse(Console.ReadLine());
        double area = Math.PI * r * r;
        double answer = Math.Round(area, 2);

        Console.WriteLine("Area of circle   : " + answer);
    }
}
