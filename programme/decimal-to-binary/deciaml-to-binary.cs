// Write a programme to add two numbers
using System;
public class Binary
{
    static void Main(string[] args)
    {
        string Binary(int input)
        {
            return Convert.ToString(input, 2);
        }

        // Input number
        Console.Write("Enter number : ");
        int input =  int.Parse(Console.ReadLine());

        // bianry output 
        Console.WriteLine("Binary : " + Binary(input));
    }
}