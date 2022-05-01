// Write a program to compute the area of a rhombus
using System;

public class AreaOfRhombus
{
    static void Main()
    {
        float d1, d2, area;
        Console.Write("Diagonal 1 : ");
        d1 = Single.Parse(Console.ReadLine());
        Console.Write("Diagonal 2 : ");
        d2 = Single.Parse(Console.ReadLine());
        area = d1 * d2 / 2;

        Console.WriteLine("\nArea : " + area);
    }
}
