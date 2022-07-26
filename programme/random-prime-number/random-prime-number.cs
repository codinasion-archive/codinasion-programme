// Write a programme to generate a random prime number in range n1-n2
using System;
using System.Collections.Generic;

class RandomPrimeNumber
{
    public static void Main(string[] args)
    {
        int
            a,
            b,
            i,
            j,
            flag;

        Console.Write("Enter lower bound of the interval : ");

        a = int.Parse(Console.ReadLine());

        Console.Write("\nEnter upper bound of the interval : ");

        b = int.Parse(Console.ReadLine());

        Console
            .Write("\nA random prime number between {0} and {1} is : ", a, b);
        List<int> numbers = new List<int>();

        for (i = a; i <= b; i++)
        {
            if (i == 1 || i == 0) continue;

            flag = 1;

            for (j = 2; j <= i / 2; ++j)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1) numbers.Add(i);
        }
        Random rnd = new Random();
        int r = rnd.Next(numbers.Count);
        Console.WriteLine(numbers[r]);
    }
}
