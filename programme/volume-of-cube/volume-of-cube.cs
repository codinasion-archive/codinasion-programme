// Write a programme to find volume of a cube
using System;

namespace Codinasion.Programme
{
    public class VolumeOfCube
    {
        public static void Main()
        {
            Console.Write("Enter Side : ");
            decimal Side = Convert.ToDecimal(Console.ReadLine());
            decimal Volume = Side * Side * Side;
            Console.WriteLine("\nVolume of cube : " + Volume);
        }
    }
}
