// Write a program to print the minimum of given numbers
using System;
using System.Linq;

public class Reverse
{
    static void Main(string[] args)
    {
        int Reverse(int input)
        {
            return int.Parse(input
                .ToString()
                .Reverse()
                .ToString());
        }

        // Input numbers
        Console.Write("Enter numbers : ");
        int input = int.Parse(Console.ReadLine());


        // output minimum number
        Console.WriteLine("Reversed : " + Reverse(input));
    }
}