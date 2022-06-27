import java.util.Scanner;

public class swap {
   public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;

        System.out.print("Enter a : ");
        a = sc.nextInt();
        System.out.print("Enter b : ");
        b = sc.nextInt();

        int c=a;
        a=b;
        b=c;
        System.out.println("\nOutput after swapping : a :" + a +" b:"+b);

        sc.close();
    }
}
