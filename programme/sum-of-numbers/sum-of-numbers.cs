// Write a programme to find sum of n numbers
using System;

namespace Codinasion.Programme
{
    public class SumOfNumbers
    {
        public static void Main()
        {
            Console.Write("Input  : ");
            String input = Console.ReadLine();
            string[] numbers = input.Split(" ");
            var sum = 0;
            foreach (var number in numbers)
            {
                int x = Int32.Parse(number);
                sum += x;
            }
            Console.WriteLine("Output : " + sum);
        }
    }
}
