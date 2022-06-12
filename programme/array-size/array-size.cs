// Write a programme to check size of an array

using System;

public class ArraySize
{
	public static void Main()
	{
		int[] num = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		Console.WriteLine($"Array Size: {num.Length}");
		
		string[] str = {"The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
		Console.WriteLine("Array Size: " + str.Length);
	}
}
