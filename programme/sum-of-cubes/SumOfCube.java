// Write a programme to find sum of cubes of first n natural numbers.
import java.util.*;
public class SumOfCube {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        int n = sc.nextInt();
        int total = 0;
        for(int i=1;i<=n;i++){
            total += (i*i*i);
        }
        System.out.println("Output: "+total);
        sc.close();
    }
}
