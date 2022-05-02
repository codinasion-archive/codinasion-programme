import java.util.Scanner;

public class AverageOfNumbers {   
    static Scanner sc = new Scanner (System.in);

    public static void main (String[] args) {
        double i;
        double sum = 0;
        int count = 0;
    
        while(sc.hasNextDouble()) {
            System.out.println("Input: ");
            i = sc.nextDouble();
            sum = sum + i;
            count++;
        }
        System.out.println("Average: " + sum / (count));
    }
}
