// Write a programme to convert inches to feet

namespace UnitConversion
{
    public class InchesToFeet
    {
        public static double ConvertInchesToFeet(double inches) => inches / 12.0;

        public static void Main()
        {
            Console.Write("Input  : ");

            double inches;
            if (double.TryParse(Console.ReadLine(), out inches))
            {
                double feet = ConvertInchesToFeet(inches);
                Console.WriteLine("Output : " + Math.Round(feet, 2));
            }
            else
            {
                Console.WriteLine("Invalid Input");
            }
        }
    }
}
