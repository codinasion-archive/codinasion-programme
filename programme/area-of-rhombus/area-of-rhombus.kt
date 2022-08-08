// Write a programme to compute the area of a rhombus

import java.util.Scanner

fun main() {
    val sc = Scanner(System.`in`)

    print("Diagonal 1 : ")
    val diag1 = sc.nextInt().toFloat()

    print("Diagonal 2 : ")
    val diag2 = sc.nextInt().toFloat()

    val area = diag1 * diag2 / 2
    println("Area : $area")

    sc.close()
    }
