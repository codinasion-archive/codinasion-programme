// Write a programme for Digital Root of a number
using System;

public class DigitalRoot
{
    public static void Main(string[] args)
    {
        Console.Write("Input  : ");
        int num;
        if (int.TryParse(Console.ReadLine(), out num))
        {
            Console.WriteLine("\nOutput : {0}", Convert(num));
        }
        else
        {
            Console.WriteLine("Input Err");
        }
    }

    public static int Convert(int n)
    {
        if (n == 0) return 0;

        return 1 + ((n - 1) % 9);
    }
}
