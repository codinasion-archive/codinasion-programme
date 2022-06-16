// Write a programme to convert minutes to seconds

using System;

public class MinutesToSeconds
{
    public static void Main(string[] args)
    {
        Console.Write("Minutes : ");
        int num;
        if (int.TryParse(Console.ReadLine(), out num))
        {
            Console.WriteLine("\nSeconds : {0}", num * 60);
        }
        else
        {
            Console.WriteLine("Input Err");
        }
    }
}