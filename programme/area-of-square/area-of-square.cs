// Computes the area of a square
using System;

public class SquareArea
{
    static void Main(string[] args)
    {
        double SquareArea(string input)
        {
            return Math.Pow(double.Parse(input), 2);
        }

        // Input numbers
        Console.Write("Enter side : ");
        string input = Console.ReadLine();

        // output sum of numbers
        Console.WriteLine("\nArea of square : " + SquareArea(input));
    }
}
