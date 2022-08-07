// Write a programme to print alphabet triangle pattern

import java.util.Scanner

class AlphaTrianglePattern {
    private fun pattern(height: Int) {
        print("Output :\n")
        for (i in 1..height) {
            var c = 65
            for (k in height downTo i + 1) {
                print(" ")
            }
            for (j in 1 until 2 * i) {
                if (j < i) {
                    print(c.toChar())
                    c++
                } else {
                    print(c.toChar())
                    c--
                }
            }
            print("\n")
        }
    }

    fun main() {
        val sc = Scanner(System.`in`)
        print("Input  : ")
        val height = sc.nextInt()
        pattern(height)
        sc.close()
    }
}