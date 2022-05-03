import java.util.Scanner;
class hoursToSeconds {
    public static void main(String args[]){
        
        Scanner sc = new Scanner(System.in);

        System.out.println("hours: ");
        int s = Integer.parseInt(sc.nextLine());
        s = s*60*60;
        System.out.println("Seconds: " + s);
        sc.close();

    }
}