// Write a programmeto compute the volume of a Cylinder
using System;

public class VolumeOfCylinder
{
    public static void Main()
    {
        // taking radius of cylinder
        Console.Write("Enter the radius : ");
        int radius = int.Parse(Console.ReadLine());

        // taking height of cylinder
        Console.Write("Enter the height : ");
        int height = int.Parse(Console.ReadLine());

        // calculating Volume of cylinder
        double volume = Math.PI * radius * radius * height;

        Console.WriteLine($"\nVolume of cylinder : {Math.Round(volume, 2)}");
    }
}
