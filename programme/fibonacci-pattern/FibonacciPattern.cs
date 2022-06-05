// Write a program to print Fibonacci pattern

namespace SimpleNumbers
{
    public class FibonacciPattern
    {
        private static void Fibonacci(int n)
        {
            int f1 = 0;
            int f2 = 1;
            int temp;

            for (int i = 0; i < n; i++)
            {
                Console.Write($"{f2} ");
                temp = f1;
                f1 = f2;
                f2 = temp + f1;
            }
            Console.WriteLine();
        }

        private static void PrintFibonacciPattern(int patternLength)
        {
            for (int n = 1; n <= patternLength; n++)
            {
                Fibonacci(n);
            }
        }

        public static void Main()
        {
            
            int patternLength;
            bool isInputValid;

            do
            {
                Console.Write("Enter an integer >= 2 : ");
                isInputValid = int.TryParse(Console.ReadLine(), out patternLength);
            } while(!isInputValid || patternLength < 2);

            Console.WriteLine("\nInput  : " + patternLength);
            Console.WriteLine("Output : ");
            PrintFibonacciPattern(5);
        }
    }
} 
