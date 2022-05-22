using System;
public class MultiplicationTable
{
    public static void Main(String[] args) {

        int num = 5;
        for (int i = 1; i < 11; i++) {
            Console.WriteLine("{0} * {1} = {2}", i, num, i * num);
        }
    }
}