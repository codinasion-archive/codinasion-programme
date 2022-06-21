// Write a programme to convert hours to seconds.
using System;

public class HoursToSeconds
{
    public static void Main(string[] args)
    {
        Console.Write("Hours : ");
        int num;
        if (int.TryParse(Console.ReadLine(), out num))
        {
            Console.WriteLine("\nSeconds : {0}", num * 3600);
        }
        else
        {
            Console.WriteLine("Input Err");
        }
    }
}
