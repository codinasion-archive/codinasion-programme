// Write a programme to find perimeter of rectangle
using System;

public class PerimeterOfRectangle
{
    public static void Main(string[] args)
    {
        Console.Write("Length    : ");
        string input = Console.ReadLine();
        int
            length,
            breadth;

        // verifies valid input and passes converted int to length variable
        if (int.TryParse(input, out length))
        {
            Console.Write("Breadth   : ");
            input = Console.ReadLine();

            // gets 2nd user input and passes converted int to breadth variable
            if (int.TryParse(input, out breadth))
            {
                Console.WriteLine("\nPerimeter : " + (2 * (length + breadth)));
                return;
            }
        }
        Console.WriteLine("\n*** Invalid input !!! ***");
    }
}
