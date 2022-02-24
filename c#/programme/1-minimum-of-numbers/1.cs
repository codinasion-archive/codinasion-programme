using System;
using System.Linq;

int Minimum(string input)
{
    return input.Split(" ").Min(x => int.Parse(x)));
}