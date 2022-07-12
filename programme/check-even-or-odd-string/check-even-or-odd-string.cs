using System;
namespace Codinasion.Programme
{
    class EvenOrOddString
    {
        static void Main(string[] args)
        {
            Console.Write("Input : ");
            String input = Console.ReadLine();
            int length = input.Length;
            if (length % 2 == 0)
            {
                Console.WriteLine("Even length");
            }
            else
            {
                Console.WriteLine("Odd length");
            }
        }
    }
}