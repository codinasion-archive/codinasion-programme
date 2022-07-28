/* Program to Add N numbers from user and after calculate and display the sum*/

import java.util.*;
class SumOfNumbers
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Number of Numbers to be Calculated: ");
int n=inp.nextInt();
int i,sum=0,z;

for(i=0;i<n;i++)   //Entering N numbers
{
System.out.print("\n Enter: ");
z=inp.nextInt();
sum=sum+z;       //Cumulative Sum
}

System.out.println("Sum of the numbers: "+sum);

}
}
