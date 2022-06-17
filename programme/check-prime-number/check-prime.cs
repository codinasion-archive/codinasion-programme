// Write a program to check prime number
using System;

public class CheckPrimeNumber
{
    public static void Main(string[] args)
    {
        Console.Write("Input  : ");
        if (int.TryParse(Console.ReadLine(), out int num))
        {
            Console.WriteLine("Output : {0} number", IsPrime(num) ? "Prime": "Not prime");
        }
        else
        {
            Console.WriteLine("Input Err");
        }
    }

    public static bool IsPrime(int n)
    {
        if (n < 2) return false;
        else if (n == 2) return true;
        else if (n % 2 == 0) return false;

        double sqrtNum = Math.Sqrt(n);

        for (int i = 3; i <= sqrtNum; i += 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}