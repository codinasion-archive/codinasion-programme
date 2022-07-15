// Write a programme to find index of an alphabet
using System;

namespace Codinasion.Programme
{
    class IndexOfAnAlphabet
    {
        static void Main(string[] args)
        {
            Console.Write("Input  : ");
            String input = Console.ReadLine();
            char c = char.Parse(input);

            int index = (int) c % 32;
            Console.WriteLine("Output : " + index);
        }
    }
}
