// Write a programme to print multiplication of 2 matrices
package main

import (
	"fmt"
)

func displayMatrix(m [][]int) {
	// show the matrix content in tabular form
	var row int = len(m)
	var col int = len(m[0])
	for i := 0; i < row; i++ {
		for j := 0; j < col; j++ {
			fmt.Printf("%d ", m[i][j])
		}
		fmt.Printf("\n")
	}
	fmt.Printf("\n")
}

func matrixMultiplication(a, b [][]int) {
	// multiplies two matrices and show the resultant matrix
	var row int = len(a)
	var col int = len(a[0])
	var result = make([][]int, row)
	for i := 0; i < row; i++ {
		result[i] = make([]int, col)
	}
	for i := 0; i < row; i++ {
		for j := 0; j < col; j++ {
			result[i][j] = 0
			for k := 0; k < row; k++ {
				result[i][j] += a[i][k] * b[k][j]
			}
		}
	}
	fmt.Printf("First Matrix: \n")
	displayMatrix(a)
	fmt.Printf("Second Matrix: \n")
	displayMatrix(b)
	fmt.Println("Product Matrix: ")
	displayMatrix(result)
}

func main() {
	var first_matrix = [][]int{
		{1, 1, 1},
		{2, 2, 2},
		{3, 3, 3},
	}
	var second_matrix = [][]int{
		{1, 1, 1},
		{2, 2, 2},
		{3, 3, 3},
	}

	matrixMultiplication(first_matrix, second_matrix)
}
