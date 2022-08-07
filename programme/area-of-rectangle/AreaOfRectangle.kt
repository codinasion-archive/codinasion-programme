// Write a programme to compute the area of a rectangle

import java.util.Scanner

class AreaOfRectangle {
    fun main() {
        val sc = Scanner(System.`in`)

        // taking length input
        print("Enter the length  : ")
        val length = sc.nextInt()

        // taking breadth input
        print("Enter the breadth : ")
        val breadth = sc.nextInt()

        // calculating area of a rectangle
        val area = length * breadth

        // printing the final answer
        println("\nArea of rectangle : $area")
        sc.close()
    }
}