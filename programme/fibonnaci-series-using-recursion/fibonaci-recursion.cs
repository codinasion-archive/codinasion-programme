// Write a program to print fibonacci series using recursion

using System;

public class FibonaciRecursion
{
    public static void Main(string[] args)
    {
        Console.Write("Input : ");
        int num;
        if (int.TryParse(Console.ReadLine(), out num))
        {
            Console.Write("\nOutput : ");
            for (int i = 0; i < num; i++) {
                Console.Write("{0} ", fib(i));
            }
            Console.WriteLine();
        }
        else
        {
            Console.WriteLine("Input Err");
        }
    }

    public static int fib(int n)
    {
        if (n == 0 || n == 1) return n;

        return fib(n - 1) + fib(n - 2);
    }
}