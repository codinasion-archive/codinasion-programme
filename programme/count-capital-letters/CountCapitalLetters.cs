// write a programme to get the number of capital letters in a string
using System;
using System.Linq;

namespace Codinasion.Programme
{
    internal class CountCapitalLetters
    {
        public static void Main()
        {
            string input = GetInput();
            int numberOfCapitals = CountNumberOfCapitalLetters(input);
            Console
                .WriteLine($"\n'{input}' has {numberOfCapitals} capital letters");
        }

        private static int CountNumberOfCapitalLetters(string stringToCount)
        {
            return stringToCount.Count(c => char.IsUpper(c));
        }

        private static string GetInput()
        {
            string input = null;
            while (input == null)
            {
                Console
                    .Write("Please enter a string to count the capital letters of : ");
                string consoleInput = Console.ReadLine();
                if (!string.IsNullOrEmpty(consoleInput))
                {
                    input = consoleInput;
                }
            }
            return input;
        }
    }
}
