// Write a program to compute the area of a rhombus
using System;

public class AreaOfRhombus
{
    public static void Main(String[] args)
    {
        double diag1;
        double diag2;
        Console.Write("Diagonal 1 : ");
        diag1 = double.Parse(Console.ReadLine());

        Console.Write("Diagonal 2 : ");
        diag2 = double.Parse(Console.ReadLine());

        Console.WriteLine("\nArea : {0}", diag1 * diag2 / 2);
    }
}
