// Write a programme to find square root of a number
using System;

namespace Codinasion.Programme
{
    public class SquareRootOfNumber
    {
        public static void Main()
        {
            Console.Write("Input  : ");
            String input = Console.ReadLine();
            int x = Int32.Parse(input);
            Console.WriteLine("Output : " + Math.Sqrt(x));
        }
    }
}
