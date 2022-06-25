// Write a programme to find sum of cubes of first n natural numbers.
using System;
using System.Linq;

public class SumOfCube
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
                    .Aggregate(0, (a, b) => a + (int) Math.Pow(b, 3));

            Console.WriteLine($"Output : {total}");
        }
        else
        {
            Console.WriteLine("Input Err");
        }
    }
}
