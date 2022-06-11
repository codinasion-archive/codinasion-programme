using System;
using System.Linq;

namespace AverageOfANumber
{
    class AverageOfANumber
    {
        static void Main(string[] args)
        {
            try
            {
                // Initialisation
                string numStr = string.Empty;
                float avgNum = 0.0f;

                // Read value from keyboard
                Console.Write("Input : ");
                numStr = Console.ReadLine();

                // Calculate average
                avgNum = numStr.Split(" "). // <= Split each value using whitespace. E.g. "1 2 3" => ["1", "2", "3"]
                    ToList(). // Convert to List so as to use Linq
                    ConvertAll( // Convert each string to a float. E.g. "1.5" => 1.5f
                        x => float.Parse(x.ToString())
                    )
                    .Average(); // Compute average from the List returned by ConvertAll

                // Display result
                Console.WriteLine($"Output : {avgNum}");
            }
            // Handle other exceptions
            catch (Exception ex)
            {
                Console.WriteLine($"Errors => {ex.Message}{Environment.NewLine}{ex.StackTrace}");
            }
        }
    }
}
