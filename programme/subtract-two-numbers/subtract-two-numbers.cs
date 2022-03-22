// Write a programme to subtract two numbers
using System;

public class Subtraction
{
    static void Main(string[] args)
    {
        int Subtract(int a, int b)
        {
            return a - b;
        }

        // Input a
        Console.Write("Enter a: ");
        int a = int.Parse(Console.ReadLine());
        // Input b
        Console.Write("Enter b: ");
        int b = int.Parse(Console.ReadLine()); ;

        // Difference of numbers 
        Console.WriteLine("Difference of numbers: " + Subtract(a, b));
    }
}