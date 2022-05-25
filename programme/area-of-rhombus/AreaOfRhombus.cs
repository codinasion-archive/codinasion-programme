using System;
public class AreaOfRhombus {
    public static void main(String[] args) {
        double diag1, diag2;
        Console.WriteLine("Diagonal 1 : ");
        diag1 = double.Parse(Console.ReadLine());

        Console.WriteLine("Diagonal 2 : ");
        diag2 = double.Parse(Console.ReadLine());

        Console.WriteLine("Area : {0}", diag1 * diag2 / 2);
    }
}
