// Write a C# programme to convert years to days
using System;

public class YearsToDays
{
    static void Main(string[] args)
    {
        int YearsToDays(int years)
        {
            return years * 365;
        }

        // Input number of years
        Console.Write("Years: ");
        int years = int.Parse(Console.ReadLine());

        // Days output
        Console.WriteLine("Days: " + YearsToDays(years));
    }
}