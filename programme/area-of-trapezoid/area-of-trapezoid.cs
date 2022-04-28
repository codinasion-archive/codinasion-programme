using System;

class MainClass {
  public static void Main (string[] args) {
    Console.WriteLine("Base 1:");
    double base1 = Convert.ToDouble(Console.ReadLine());

    Console.WriteLine("Base 2:");
    double base2  = Convert.ToDouble(Console.ReadLine());

    Console.WriteLine("Height:");
    double height  = Convert.ToDouble(Console.ReadLine());

    double area = (base1 + base2) * height / 2;
    Console.WriteLine("The area of trapezoid is: " + area);

  }
}
