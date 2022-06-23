// Write a programme to print the given pattern

using System;

public class Patern2
{
    public static void Main(string[] args)
    {
        Console.Write("Input  : ");
        if (int.TryParse(Console.ReadLine(), out int num))
        {
            for (int i = 0; i < num*2; i++)
            {
                int stars = i <= num ? i : num * 2 - i;
                string line = "";

                for (int offset = num - stars; offset > 0; offset--) line += " ";
                for (; stars > 0; stars--) line += "* ";

                Console.WriteLine(line);
            }
        }
        else
        {
            Console.WriteLine("Input Err");
        }
    }
}