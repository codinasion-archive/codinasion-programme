import java.util.Scanner;
class perimiterofsquare {
	public static void main(String args[]) {
		// Your code goes here
		Scanner sc = new Scanner(System.in);
		
		System.out.println("side: ");
		int s = Integer.parseInt(sc.nextLine());
    s = s*s;
		System.out.println(s); 
		sc.close();
	}
}