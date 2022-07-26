// Write a programme to check a valid email address
using System;
using System.Text.RegularExpressions;

public class EmailValidator
{
    public static bool IsValid(string email)
    {
        string regex =
            @"^([a-zA-Z0-9_\-\.]+)@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.)|(([a-zA-Z0-9\-]+\.)+))([azA-Z]{2,4}|[0-9]{1,3})(\]?)$";

        return Regex.IsMatch(email, regex, RegexOptions.IgnoreCase);
    }

    public static void Main()
    {
        string email = "abc@mail.com";
        Console.WriteLine("Input  : {0}", email);

        Console.WriteLine("Output : {0}", IsValid(email) ? "Valid" : "Invalid");
    }
}
