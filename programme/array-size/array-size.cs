// Write a programme to check size of an array
using System;

public class ArraySize
{
    public static void Main()
    {
        int[] num = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        Console.Write("Array : [ ");
        var numCount = 1;
        foreach (var item in num)
        {
            if (numCount == num.Length)
            {
                Console.Write(item.ToString());
            }
            else
            {
                Console.Write(item.ToString() + ", ");
            }

            numCount = numCount + 1;
        }
        Console.Write(" ]\n");
        Console.WriteLine($"Array Size : {num.Length}");

        // string[] str =
        // {
        //     "The",
        //     "quick",
        //     "brown",
        //     "fox",
        //     "jumps",
        //     "over",
        //     "the",
        //     "lazy",
        //     "dog"
        // };
        // Console.Write("Array : [ ");
        // var strCount = 1;
        // foreach (var item in str)
        // {
        //     if (strCount == str.Length)
        //     {
        //         Console.Write(item.ToString());
        //     }
        //     else
        //     {
        //         Console.Write(item.ToString() + ", ");
        //     }

        //     strCount = strCount + 1;
        // }
        // Console.Write(" ]\n");
        // Console.WriteLine("Array Size: " + str.Length);
    }
}
