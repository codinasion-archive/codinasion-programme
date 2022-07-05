// Write a programme to find area of triangle
using System;

public class AreaOfTriangle
{
    static void Main(string[] args)
    {
        Console.Write("Input first side  : ");
        var a = int.Parse(Console.ReadLine() ?? string.Empty);

        Console.Write("Input second side : ");
        var b = int.Parse(Console.ReadLine() ?? string.Empty);

        Console.Write("Input third side  : ");
        var c = int.Parse(Console.ReadLine() ?? string.Empty);

        var s = (a + b + c) / 2;

        Console
            .WriteLine($"\nThe area is : {
                Math.Sqrt(s * (s - a) * (s - b) * (s - c))}");
    }
}
