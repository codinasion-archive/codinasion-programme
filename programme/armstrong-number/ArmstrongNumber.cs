using System;
public class ArmstrongNumber
{
    public static bool IsArmstrongNumber(int num)
    {
        int sum = 0; 
        for (int temp = num; temp > 0; temp /= 10)
        {
            sum += ((int)Math.Pow(temp % 10, numDigits(num)));
        }
        if (num == sum) return true; return false;
    }
    public static int numDigits(int num)
    {
        if (num == 0) return 1;
        return ((int)Math.Floor(Math.Log10(num))) + 1;
    }
    public static void Main(string[] args)
    {
        Console.WriteLine("Input  : ");
        Console.WriteLine(
            IsArmstrongNumber(int.Parse(Console.ReadLine())) ?
            "Is an Armstrong number" : "Not an Armstrong number"
        );
    }
}