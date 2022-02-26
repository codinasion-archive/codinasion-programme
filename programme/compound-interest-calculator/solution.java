# Write a programme to calculate compound interest.

public class CompoundInterest {

    public static void main(String args[]) {
        # Input from User
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Principle Amount : "));
        int p = sc.nextInt();
        System.out.print("Enter Time Period : "));
        int t = sc.nextInt();
        System.out.print("Enter Rate of Interest : "));
        int r = sc.nextInt();
        # output
        System.out.println('Amount : ', (p * Math.pow(1 + (r / 100), t)))
        System.out.println('Compound Interest : ', (amount - p))
    }
}