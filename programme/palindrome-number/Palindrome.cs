// Write a program to check palindrome number
using System;

namespace SpecialNumbers
{
    public class Palindrome
    {
        public static double Reverse(double number)
        {
            double
                remainder,
                reverse = 0;
            while (number > 0)
            {
                remainder = number % 10;
                reverse = reverse * 10 + remainder;
                number = Math.Floor(number / 10);
            }
            return reverse;
        }

        public static bool IsPalindrome(double number)
        {
            if (number < 0)
            {
                return false;
            }
            if (number < 10)
            {
                return true;
            }
            return number == Reverse(number);
        }

        public static void PalindromeConsoleUtility(double number)
        {
            if (IsPalindrome(number))
            {
                Console.WriteLine("Output : Palindrome number");
            }
            else
            {
                Console.WriteLine("Output : Not palindrome number");
            }
        }

        public static void Main()
        {
            Console.Write("Input  : ");

            double number;
            if (double.TryParse(Console.ReadLine(), out number))
            {
                PalindromeConsoleUtility (number);
            }
            else
            {
                Console.WriteLine("Invalid Input");
            }
        }
    }
}
