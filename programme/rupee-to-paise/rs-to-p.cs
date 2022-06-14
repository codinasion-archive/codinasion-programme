// Write a program to rupee to paise
using System;

public class RupeeToPaise
{
    public static void Main(string[] args)
    {
        Console.Write("Rupee : ");
        double rupee;
        if (double.TryParse(Console.ReadLine(), out rupee))
        {
            Console.WriteLine("Paise : {0}", rupee * 100);
        } 
        else
        {
            Console.WriteLine("Input Err");
        }
    }
}