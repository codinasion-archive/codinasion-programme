// Write a programme to generate new array with sliced elements of old array

import java.util.Arrays;

public class ArrayElementsSlice {

  public static void main(String[] args) {
    String[] array = new String[] {
      "abcd",
      "efgh",
      "ijklmn",
      "opq",
      "rstuvw",
      "xyz",
    };
    int start = 2;
    int end = 3;
    System.out.println("Start index : " + start);
    System.out.println("End   index : " + end);
    System.out.println(
      "\nOutput : " + Arrays.toString(arrayElementsSlice(array, start, end))
    );
  }

  private static String[] arrayElementsSlice(
    String[] array,
    int start,
    int end
  ) {
    for (int i = 0; i < array.length; i++) {
      array[i] = array[i].substring(start - 1, end);
    }
    return array;
  }
}
