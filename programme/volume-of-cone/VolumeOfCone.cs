// Write a program to find the volume of a cone
using System;

namespace Codinasion.Programme
{
    internal class VolumeOfCone
    {
        public static void Main()
        {
            double radius = GetRadius();
            double height = GetHeight();
            Cone cone = Cone.Create(height, radius);
            Console
                .WriteLine($"\nA cone with a radius of {cone.Radius} and a height of {cone.Height} has a volume of {string.Format("{0:0.00000}", cone.Volume)}")
        }

        private static double GetHeight()
        {
            return GetConsoleInput("Height");
        }

        private static double GetRadius()
        {
            return GetConsoleInput("Radius");
        }

        private static double GetConsoleInput(string dimension)
        {
            double? input = null;

            while (input == null)
            {
                Console.Write($"Enter {dimension} : ");
                string consoleInput = Console.ReadLine();
                if (double.TryParse(consoleInput, out double parsedInput))
                {
                    if (parsedInput > 0)
                    {
                        input = parsedInput;
                    }
                    else
                    {
                        Console.WriteLine("Input must be greater than 0");
                    }
                }
                else
                {
                    Console.WriteLine($"Unable to parse input {consoleInput}");
                }
            }
            return input.Value;
        }
    }

    internal class Cone
    {
        public double Height { get; protected set; }

        public double Radius { get; protected set; }

        // (1/3) must be cast to a double or else it'll treat it as an int and return 0
        public double Volume =>
            (double) 1 / 3 * Math.PI * Math.Pow(Radius, 2) * Height;

        private Cone(double height, double radius)
        {
            Height = height;
            Radius = radius;
        }

        public static Cone Create(double height, double radius)
        {
            return new Cone(height, radius);
        }
    }
}
