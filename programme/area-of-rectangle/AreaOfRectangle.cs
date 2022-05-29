// Write a program to compute the area of a rectangle
using System;

public class AreaOfRectangle
{
    public static void Main(String[] args)
    {
        int length;
        int width;
        Console.Write("Enter Length : ");
        length = int.Parse(Console.ReadLine());
        Console.Write("Enter Width  : ");
        width = int.Parse(Console.ReadLine());
        Console.WriteLine("\nThe area is {0}", length * width);
    }
}
