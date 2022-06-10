namespace Calculations
{
    public class SimpleInterestCalculator
    {
        public static decimal CalculateInterest(decimal principalAmount, int time, int percentageInterestRate)
        {
            float decimalInterestRate = percentageInterestRate / 100f;
            return principalAmount * (decimal)(time * decimalInterestRate);
        }

        public static decimal GetDecimalInput(string instructions)
        {
            bool isInputValid;
            decimal inputValue;

            do
            {
                Console.Write(instructions);
                isInputValid = decimal.TryParse(Console.ReadLine(), out inputValue);
            }
            while (!isInputValid);

            return inputValue;
        }

        public static int GetIntInput(string instructions)
        {
            bool isInputValid;
            int inputValue;

            do
            {
                Console.Write(instructions);
                isInputValid = int.TryParse(Console.ReadLine(), out inputValue);
            }
            while (!isInputValid);

            return inputValue;
        }

        public static void Main()
        {
            decimal principalAmount = GetDecimalInput("Enter P : ");
            int time = GetIntInput("Enter T : ");
            int percentageInterestRate = GetIntInput("Enter R : ");

            decimal interestAmount = CalculateInterest(principalAmount, time, percentageInterestRate);
            Console.WriteLine("\nSimple interest: " + Math.Round(interestAmount, 2));
        }
    }
}
