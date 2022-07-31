// Write a programme to generate a random odd number in range n1-n2

import java.util.*;

class HelloWorld {

  public static void main(String[] args) {
    Scanner s_name = new Scanner(System.in);

    System.out.print("Enter start range : ");
    int startRange = s_name.nextInt();
    System.out.print("Enter end   range : ");
    int endRange = s_name.nextInt();

    System.out.print(
      "\nRandom odd value in int from " + startRange + " to " + endRange + " : "
    );
    int random_int = (int) Math.floor(
      Math.random() * (endRange - startRange + 1) + startRange
    );
    while (random_int % 2 == 0) {
      random_int =
        (int) Math.floor(
          Math.random() * (endRange - startRange + 1) + startRange
        );
    }
    System.out.println(random_int);

    s_name.close();
  }
}
