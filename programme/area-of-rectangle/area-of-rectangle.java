import java.util.Scanner;

public class area {

	public static void main(String[] args) {
   		    Scanner sc = new Scanner(System.in);
	        System.out.print("Enter the length : ");

	        // taking length input
	        int length = sc.nextInt();

	        System.out.print("\nEnter the breadth : ");

	        //taking breadth input
	        int breadth = sc.nextInt();

	        // calculating area of a rectangle
	        int area =  length * breadth;


	        // printing the final answer
	        System.out.println("Area of rectangle : " + area);

	        sc.close();


	}

}
