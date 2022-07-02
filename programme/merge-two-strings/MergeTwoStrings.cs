// Write a programme to merge two strings
using System;

class MergeTwoStrings
{
    static void Main(string[] args)
    {
        try
        {
            // Initialisation
            string firstStr = string.Empty;
            string secondStr = string.Empty;

            // Read values from keyboard
            Console.Write("Input1 : ");
            firstStr = Console.ReadLine();

            Console.Write("Input2 : ");
            secondStr = Console.ReadLine();

            // Display output
            // Note: Use of string interpolation ($ operation) to concat/merge two variables
            Console.WriteLine($"Output : {firstStr}{secondStr}");
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
