// Write a programmeto print Fibonacci series without recursion
using System;

public class Fibonaci
{
    static void Main(string[] args)
    {
        Console.Write("Input  : ");
        int n = int.Parse(Console.ReadLine());

        int
            a = 0,
            b = 1,
            i = 0,
            temp = 0;

        Console.Write("Output : ");

        while (i != n)
        {
            Console.Write(a + " ");
            temp = a;
            a = b;
            b = temp + b;
            i++;
        }

        Console.Write("\n");
    }
}
