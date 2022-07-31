//Programme to generate random even number in range using Java

import java.util.Random;
import java.util.*;

class HelloWorld {
    public static void main(String[] args) {
        Scanner s_name = new Scanner(System.in);
        
        System.out.println("Enter start range:\n");
        int startRange = s_name.nextInt();
        System.out.println("Enter end range:");
        int endRange = s_name.nextInt();
        
        System.out.println("Random value in int from "+startRange+" to "+endRange+ ":\n");
        int random_int = (int)Math.floor(Math.random()*(endRange-startRange+1)+startRange);
        while (random_int % 2 != 0){
            
            random_int = (int)Math.floor(Math.random()*(endRange-startRange+1)+startRange);
            
        }
        System.out.println(random_int);
    }
}
