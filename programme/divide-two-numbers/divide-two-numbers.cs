using System;

public class DivideTwoNumbers
{
    public static void Main()
    {
        Console.Write("Enter two numbers : ");
        string[] numbers = Console.ReadLine().Split(" ");
        float num1 = float.Parse(numbers[0]);
        float num2 = float.Parse(numbers[1]);
        float result = num1 - num2;
        Console.WriteLine($"\nResult : {result}");
    }
}