using System;
public class AreaOfRectangle
{
    public static void Main(String[] args)
    {
        int length, width;
        Console.WriteLine("Enter Length:");
        length = int.Parse(Console.ReadLine());
        Console.WriteLine("Enter Width");
        width = int.Parse(Console.ReadLine());
        Console.WriteLine("The area is {0}", length * width);
    }
}