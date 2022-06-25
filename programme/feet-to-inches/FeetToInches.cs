// Write a programme to convert feet to inches
using System;

namespace UnitConversion
{
    public class FeetToInches
    {
        public static double ConvertFeetToInches(double feet) => feet * 12.0;

        public static void Main()
        {
            Console.Write("Input  : ");

            double feet;
            if (double.TryParse(Console.ReadLine(), out feet))
            {
                double inches = ConvertFeetToInches(feet);
                Console.WriteLine("Output : " + Math.Round(inches, 2));
            }
            else
            {
                Console.WriteLine("Invalid Input");
            }
        }
    }
}
