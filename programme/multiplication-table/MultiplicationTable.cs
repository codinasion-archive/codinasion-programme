using System;
public class MultiplicationTable
{
    public static void Main(String[] args) {

        Console.WriteLine("Enter Number:");
        int num = int.Parse(Console.ReadLine());
        for (int i = 1; i < 11; i++) {
            Console.WriteLine("{0} * {1} = {2}", num, i, num * i);
        }
    }
}