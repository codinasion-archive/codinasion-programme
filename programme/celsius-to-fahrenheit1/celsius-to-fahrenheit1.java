/** Java program to convert celsius to fahrenheit */

import java.util.Scanner;
class Celsius_to_Fahrenheit 
{
 public static void main(String[] args)
{
 float cel, far;

Scanner s=new Scanner(System.in);
System.out.println("Input ( C ) :");
cel=s.nextInt();

far = cel * 9/5 + 32;

System.out.println("Output ( F ): "+far);
}
}