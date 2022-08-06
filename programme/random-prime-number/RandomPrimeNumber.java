// Write a programme to generate a random prime number in range n1-n2

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.Random;

public class RandomPrimeNumber{

    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the lower bound of the interval: ");
        int lower = scanner.nextInt();

        System.out.print("Enter Upper bound of interval: ");
        int upper = scanner.nextInt();

        if(lower >= upper){
            System.out.println("The lower bound needs to be smaller than the upper bound");
        }
        else{
            System.out.printf("The random prime number is: %d", findPrimeNumber(lower, upper));
        }
    }

    private static int findPrimeNumber(int lower, int upper) {
        List<Integer> integerList = new ArrayList<>();
        Random random = new Random();
        for(int i = lower; i < upper; i++){
            if(isPrime(i)){
                integerList.add(i);
            }
        }
        int listIndex = random.nextInt(integerList.size());
        return integerList.get(listIndex);

    }

    private static boolean isPrime(int n) {
        if (n < 2)
            return false;

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}
