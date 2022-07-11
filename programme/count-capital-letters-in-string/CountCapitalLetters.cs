// write a programme to get the number of capital letters in a string
namespace Codinasion.Programme
{
    internal class CountCapitalLetters
    {

        public static void Main()
        {

            string input = GetInput();
            int numberOfCapitals = input.Count(c => char.IsUpper(c));
            Console.WriteLine($"{input} has {numberOfCapitals} capital letters");
        }

        private static int CountNumberOfCapitalLetters(string stringToCount)
        {
            return stringToCount.Count(c => char.IsUpper(c));
        }
        private static string GetInput()
        {
            string? input = null;
            while (input == null)
            {
                Console.Write("Please enter a string to count the capital letters of : ");
                string? consoleInput = Console.ReadLine();
                if (!string.IsNullOrEmpty(consoleInput))
                {
                    input = consoleInput;
                }
            }
            return input;
        }
    }
}
