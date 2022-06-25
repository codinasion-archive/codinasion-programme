// Write a programme to check Pangram sentence
using System;
using System.Collections.Generic;

public class PangramChecker
{
    public static void Main(string[] args)
    {
        Console.Write("Input  : ");
        var str = Console.ReadLine();
        if (str == null)
        {
            Console.WriteLine("Input Error");
            return;
        }

        var chars = str.ToCharArray();
        var hs = new HashSet<char>();

        for (int i = 0; i < chars.Length; i++)
        {
            int c = (int) chars[i];

            // 97 == 'a', 122 == 'z' (ascii code)
            if (97 <= c && c <= 122) hs.Add(chars[i]);
        }

        Console
            .WriteLine("Output : {0}Pangram Sentence",
            hs.Count == 26 ? "" : "Not a ");
    }
}
