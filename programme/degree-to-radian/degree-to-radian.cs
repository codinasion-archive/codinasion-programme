// Write a programme to convert degree to radian
using System;

public class DegreeToRadian
{
    static void Main(string[] args)
    {
        Console.Write("Input degrees : ");

        double degrees;
        while (!double.TryParse(Console.ReadLine(), out degrees))
        Console.WriteLine("Invalid Input!!");

        double radians = degrees * Math.PI / 180;
        Console
            .WriteLine($"\n{degrees} Degrees is {Math.Round(radians, 5)} Radians.");
    }
}
