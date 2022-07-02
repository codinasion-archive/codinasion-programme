// Write a programme to find perimeter of square
using System;

public class PerimeterOfSquare
{
    public static void Main(string[] args)
    {
        Console.Write("Side : ");
        string input = Console.ReadLine();
        int side = 0;

        // verifies valid input and passes converted int to side variable
        if (int.TryParse(input, out side))
        {
            Console.WriteLine("Perimeter : " + (side * 4));
        }
        else
        {
            Console.WriteLine("\n*** Invalid input !!! ***");
        }
    }
}
