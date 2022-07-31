// Write a programme to print sum of square of n natural number
using System;
using System.Linq;

public class SumOfSquare
{
    public static void Main(string[] args)
    {
        Console.Write("Input  : ");
        int num;
        if (int.TryParse(Console.ReadLine(), out num))
        {
            double total =
                Enumerable
                    .Range(1, Math.Abs(num))
                    .Aggregate(0, (a, b) => a + (int) Math.Pow(b, 2));

            Console.WriteLine($"Output : {total}");
        }
        else
        {
            Console.WriteLine("Input Err");
        }
    }
}
