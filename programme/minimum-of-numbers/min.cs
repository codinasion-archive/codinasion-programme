// Write a programmeto print the minimum of given numbers
using System;
using System.Linq;

public class MinNumber
{
    static void Main(string[] args)
    {
        int Minimum(string input)
        {
            return input.Split(" ").Min(x => int.Parse(x));
        }

        // Input numbers
        Console.Write("Enter numbers : ");
        string input = Console.ReadLine();

        // output minimum number
        Console.WriteLine("Minimum : " + Minimum(input));
    }
}