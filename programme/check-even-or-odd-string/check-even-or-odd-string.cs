// Write a programme to check even or odd string
using System;

namespace Codinasion.Programme
{
    class EvenOrOddString
    {
        static void Main(string[] args)
        {
            Console.Write("Input  : ");
            String input = Console.ReadLine();

            Console.Write("Output : ");
            int length = input.Length;
            if (length % 2 == 0)
            {
                Console.WriteLine("Even string");
            }
            else
            {
                Console.WriteLine("Odd string");
            }
        }
    }
}
