// Write a program to print sum of digits.
import java.util.Scanner;

class SumOfDigits {
    public static void main(String[] args) {
        
        int num, d, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");  
        num=sc.nextInt();
        
        while (num != 0)
        {
            d = num % 10;
            sum = sum + d;
            num = num / 10;
        }
    
        System.out.println("The sum of the digits of the number: "+sum);
            
    }
}
