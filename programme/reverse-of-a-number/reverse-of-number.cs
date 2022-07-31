// Write a programmeto print reverse of a number
using System;
using System.Linq;

public class Reverse
{
    static void Main(string[] args)
    {
        int Reverse(int input)
        {
            return int.Parse(new string(input.ToString()
                .Reverse()
                .ToArray()
            ));
        }

        // Input number
        Console.Write("Enter numbers : ");
        int input = int.Parse(Console.ReadLine());


        // output reversed number
        Console.WriteLine("Reversed : " + Reverse(input));
    }
}
