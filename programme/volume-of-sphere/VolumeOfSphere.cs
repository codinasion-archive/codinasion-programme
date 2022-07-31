// Write a programme to compute the volume of a Sphere
using System;

namespace Geometry
{
    public class VolumeOfSphere
    {
        public static double CalculateVolume(double radius)
        {
            return Math.Pow(radius, 3) * Math.PI * (4.0 / 3.0);
        }

        public static void Main()
        {
            Console.Write("Radius : ");

            if (double.TryParse(Console.ReadLine(), out double radius))
            {
                double volume = CalculateVolume(radius);
                Console.WriteLine("Volume : " + Math.Round(volume, 2));
            }
            else
            {
                Console
                    .WriteLine("The value provided for the radius is invalid");
            }
        }
    }
}
