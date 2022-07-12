import java.util.Scanner;

public class RadianToDegree {

    public static double radianToDegree(int radian) {

        return Math.round((radian * 180.0 / Math.PI) * 10000) / 10000.0;

    }

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        System.out.println("Input  : ");
        int radian = scan.nextInt();
        System.out.println("Output : "+ radianToDegree(radian));
        scan.close();
    }
}
