// Write a programme to find the area of circle.

import java.util.Scanner
import kotlin.math.PI
import kotlin.math.round

class AreaOfCircle {
    fun main() {
        val sc = Scanner(System.`in`)
        print("Enter the radius : ")

        // taking radius input
        val r = sc.nextInt()

        // calculating area of circle
        val area = PI * r * r

        // rounding the answer to 2 decimal places
        val answer = round(area * 100) / 100

        // printing the final answer
        println("Area of circle : $answer")
        sc.close()
    }
}