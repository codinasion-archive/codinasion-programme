// Write a programme to check leap year
using System;

public class CheckLeapYear
{
    public static void Main(string[] args)
    {
        Console.Write("Input  : ");
        if (int.TryParse(Console.ReadLine(), out int num))
        {
            Console
                .WriteLine("Output :{0} Leap Year",
                DateTime.IsLeapYear(num) ? "" : " Not a");
        }
        else
        {
            Console.WriteLine("Input Err");
        }
    }
}
