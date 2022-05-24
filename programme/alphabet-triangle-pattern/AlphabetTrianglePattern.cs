// Write a program to print alphabet triangle pattern

using System;

public class AlphabetTrianglePattern
{
    private static void pattern(int n)
    {
        Console.WriteLine("Output :");
        for (int i = 1; i <= n; i++)
        {
            int c = (int)('A');
            for (int k = n; k > i; k--)
            {
                Console.Write(" ");
            }
            for (int j = 1; j < 2 * i; j++)
            {
                Console.Write(((char)c));
                if (j < i)
                {
                    c++;
                }
                else
                {
                    c--;
                }
            }
            Console.WriteLine();
        }
    }
    public static void Main(String[] args)
    {
        Console.Write("Input  : ");
        int n = int.Parse(Console.ReadLine());
        pattern(n);
    }
}
