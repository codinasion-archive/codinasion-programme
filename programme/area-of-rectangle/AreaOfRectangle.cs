using System;
public class AreaOfRectangle
{
    public static void Main(String[] args)
    {
        Console.WriteLine("Enter Length:");
        int length = int.Parse(Console.ReadLine());
        Console.WriteLine("Enter Width");
        int width = int.Parse(Console.ReadLine());
        Console.WriteLine("The area is {0}", length * width);
    }
}