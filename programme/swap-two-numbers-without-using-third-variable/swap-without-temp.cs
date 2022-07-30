// Write a programme to swap two numbers without using third variable
using System;

class SwapTwoNumbersWithoutTemp
{
    static void Main(string[] args)
    {
        try
        {
            // Initialisation
            int a = 10;
            int b = 20;
            Console.WriteLine($"a={a} b={b}");

            // Swapping the values where:
            // - b is assigned the value of a
            // - a is assigned the value of b
            // Note: The operation is possible using tuples
            (b, a) = (a, b);

            // Display result
            Console.WriteLine($"a={a} b={b}");
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
