 class EvenOrOdd
    {
        static void Main(string[] args)
        {

            try
            {
                // Initialisation 
                string firstNumStr = string.Empty;
                const string ODD_NUMBER_MSG = "Odd number";
                const string EVEN_NUMBER_MSG = "Even number";

                // Read value from keyboard
                Console.Write("Input : ");
                firstNumStr = Console.ReadLine();

                // Parse string to number
                int numericValue = int.Parse(firstNumStr);

                // Use the modulus operator to check 
                // if the remainder is zero for even number
                if (numericValue % 2 == 0)
                {
                    // Even message
                    Console.Write(EVEN_NUMBER_MSG);
                }else
                {
                    // Odd message
                    Console.Write(ODD_NUMBER_MSG);
                }
                Console.ReadKey();
            }
            // Handle other exceptions
            catch (Exception ex)
            {
                Console.WriteLine($"Errors => {ex.Message}{Environment.NewLine}{ex.StackTrace}");
            }
            
        }
    }
