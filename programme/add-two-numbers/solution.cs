// Write a programme to add two numbers

public class AddTwo
{
    static void Main(string[] args)
    {
        int AddTwo(string input)
        {
            var sAr = input.Split(" ");
            return int.Parse(sAr[0]) + int.Parse(sAr[1]);
        }

        // Input numbers
        Console.Write("Enter numbers : ");
        string input = Console.ReadLine();

        // output minimum number
        Console.WriteLine("Result : " + AddTwo(input));
    }
}

