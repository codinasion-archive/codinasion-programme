Console.WriteLine("Insert first side:");
var a = int.Parse(Console.ReadLine() ?? string.Empty);

Console.WriteLine("Insert second side:");
var b = int.Parse(Console.ReadLine() ?? string.Empty);

Console.WriteLine("Insert third side:");
var c = int.Parse(Console.ReadLine() ?? string.Empty);

var s = (a + b + c)/2;

Console.WriteLine($"The area is: {Math.Sqrt(s * (s - a) * (s - b) * (s - c))}");