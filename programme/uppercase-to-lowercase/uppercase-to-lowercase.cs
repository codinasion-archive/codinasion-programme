using System;
public class UppercaseToLowercase
{
    public static void Main()
    {
        Console.Write("Input : ");
        string upperCaseText = Console.ReadLine();
        string lowerCaseText = upperCaseText.ToLower();
        Console.WriteLine(lowerCaseText);
    }
}