// Write a programme to check size of an array
import java.util.Arrays;

class ArraySize {

  public static void main(String[] args) {
    String[] arr = { "element1", "element2", "element3" };
    System.out.println("Input  : " + Arrays.toString(arr));

    int arrlength = arr.length;
    System.out.println("Output : " + arrlength);
  }
}
