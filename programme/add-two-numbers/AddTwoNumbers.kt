// Write a programme to add two numbers

import java.util.Scanner

class AddTwoNumbers {

    fun main() {
        val sc = Scanner(System.`in`)

        print("Enter two numbers to add : ")
        val a = sc.nextInt()
        val b = sc.nextInt()

        val sum = a + b
        println("\nThe sum of numbers is : $sum")
        sc.close()
    }
}