using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace codinasion
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter temp. (in C) : ");
            float temperature = float.Parse(Console.ReadLine());
            temperature = ((9 * temperature) / 5) + 32;
            Console.Write("Temp. in F : " + temperature + "\n");
        }
    }
}