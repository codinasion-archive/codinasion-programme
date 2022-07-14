using System;
namespace Codinasion.Programme
{
    public class SquareRootOfNumber
    {
        public static void Main()
        {
            Console.Write("Input : ");
            String input = Console.ReadLine();
            int x = Int32.Parse(input);
            Console.WriteLine(Math.Sqrt(x));
        }
    }
}