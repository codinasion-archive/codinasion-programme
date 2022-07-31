// Write a programmeto print the maximum of given numbers
using System;
using System.Linq;

public class MaxNumber
{
    static void Main(string[] args)
    {
        int Maximum(string input)
        {
            return input.Split(" ").Max(x => int.Parse(x));
        }

        // Input numbers
        Console.Write("Enter numbers : ");
        string input = Console.ReadLine();

        // output minimum number
        Console.WriteLine("Maximum : " + Maximum(input));
    }
}