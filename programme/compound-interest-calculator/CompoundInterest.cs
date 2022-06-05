// Write a programme to calculate compound interest.
namespace Calculations
{
    public class CompoundInterest
    {
        public static decimal ComputeFinalAmount(decimal principalAmount, float interestRate, float time)
        {
            return principalAmount * (decimal)Math.Pow((1 + (interestRate / 100)) , time);
        }

        public static decimal ComputeCompoundInterest(decimal principalAmount, float interestRate, float time)
        {
            return ComputeFinalAmount(principalAmount, interestRate, time) - principalAmount;
        }

        public static decimal GetDecimalInput(string instructions) {
            bool isInputValid;
            decimal inputValue;

            do{
                Console.Write(instructions);
                isInputValid = decimal.TryParse(Console.ReadLine(), out inputValue); 
            } while (!isInputValid);
            
            return inputValue;
        }

        public static float GetFloatInput(string instructions) {
            bool isInputValid;
            float inputValue;

            do{
                Console.Write(instructions);
                isInputValid = float.TryParse(Console.ReadLine(), out inputValue); 
            } while (!isInputValid);
            
            return inputValue;
        }

        public static void Main()
        {
            decimal principalAmount = GetDecimalInput("Enter the Principal Amount A : ");
            float interestRate = GetFloatInput("Enter the Time Period t      : ");
            float time = GetFloatInput("Enter the Rate of Interest r : ");

            decimal finalAmount = ComputeFinalAmount(principalAmount, interestRate, time);
            decimal compoundInterest = ComputeCompoundInterest(principalAmount, interestRate, time);

            Console.WriteLine();
            Console.WriteLine("Amount : " + Math.Round(finalAmount, 2));
            Console.WriteLine("Compound Interest : " + Math.Round(compoundInterest, 2));
        }

    }
}


