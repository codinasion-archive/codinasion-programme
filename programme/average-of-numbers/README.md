## Write a program to find average of numbers

```
Input:  2 3 4
Output: 3
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, Java" />

#### Python

```python
# importing statistics module
import statistics

# taking input and making a list
n = list(map(int, input("Input: ").split()))

# printing output
print('Output:', statistics.mean(n))
```

#### Java

```java
import java.util.Scanner;

public class AverageOfNumbers {

    private Scanner in;

    public AverageOfNumbers() {
        String getStr = getUserNums();
        double result = userAvg(getStr);
        printAverage(result, getStr);

    }

    public String getUserNums() {
        in = new Scanner(System.in);
        System.out.print("Input  : ");
        return in.nextLine();
    }

    public static double userAvg(String str) {
        String[] arr = str.split(" ");
        double sum = 0.0;
        double average = 0.0;

        for (int i = 0; i < arr.length; i++) {
            sum += Integer.parseInt(arr[i]);
        }
        if (arr.length > 0) {
            average = sum / arr.length;
        }

        return average;
    }

    public static void printAverage(double average, String userNumInput) {
        System.out.println("Output : " + average);

    }

    public static void main(String[] args) {
        new AverageOfNumbers();

    }
}
```
