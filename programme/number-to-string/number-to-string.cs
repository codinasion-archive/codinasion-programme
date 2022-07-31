// Write a programmeto convert number to strings
using System;
using System.Collections.Generic;
using System.Linq;

namespace Number_to_Strings
{
    class NumberToStrings
    {
        static void Main(string[] args)
        {
            try
            {
                // Initialisation
                string numStr = string.Empty;

                // Contains the mapping of numeric value to their string equivalent
                IDictionary<int, string> dicNumToStr =
                    new Dictionary<int, string>()
                    {
                        { 0, "zero" },
                        { 1, "one" },
                        { 2, "two" },
                        { 3, "three" },
                        { 4, "four" },
                        { 5, "five" },
                        { 6, "six" },
                        { 7, "seven" },
                        { 8, "eight" },
                        { 9, "nine" }
                    };

                // Read value from keyboard
                Console.Write("Input  : ");
                numStr = Console.ReadLine();
                Console.WriteLine();

                // Convert to List of integer
                // ===========================
                List<int> arrOfNumericValues =
                    numStr
                        .ToCharArray() // <= Convert string to array of char. E.g. "123" => ['1','2','3']
                        .ToList() // <= Convert array to List in order to use Linq to be able to convert each char to integer
                        .ConvertAll(// 1. Convert each char to string. E.g. '1' => "1"
                        // 2. Convert each string to integer. E.g. "1" => 1
                        eachChar => int.Parse(eachChar.ToString()));

                // Convert numbers to string
                // =========================
                string resultStr =
                    string
                        .Join(" ", // <= White space separator
                        arrOfNumericValues
                            .Select(// Map each number against their respective value in the dictionary. E.g. 1 => "one"
                            eachNumber => dicNumToStr[eachNumber]));

                // Display result
                Console.WriteLine($"output : {resultStr}");
            }
            // Handle other exceptions
            catch (Exception ex)
            {
                Console
                    .WriteLine($"Errors => {ex.Message}{Environment.NewLine}{
                        ex.StackTrace}");
            }
        }
    }
}
