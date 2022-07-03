// Write a programme to print first n even numbers
using System;
using System.Linq;

class PrintEvenNumber
{
    static void Main(string[] args)
    {
        try
        {
            // Initialisation
            string numStr = string.Empty;
            string evenNumberStr = string.Empty;

            // Read value from keyboard
            Console.Write("Input  :  ");
            numStr = Console.ReadLine();

            // Loop n-th time based on value input
            for (int eachNum = 0; eachNum < int.Parse(numStr); eachNum++)
            {
                // Check if even number and concat with previous string
                if (eachNum % 2 == 0)
                    evenNumberStr = evenNumberStr + " " + eachNum;
            }

            // Display result
            Console.WriteLine($"Output : {evenNumberStr}");
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
