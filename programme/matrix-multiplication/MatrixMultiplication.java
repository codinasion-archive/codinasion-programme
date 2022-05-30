// Java program for matrix multiplication

public class MatrixMultiplication {

    public static int[][] matrixMultiplication(int[][] matrixA, int[][] matrixB) {
        
        int[][] matrixC = new int[matrixA.length][matrixB[0].length];
        
        for (int i = 0; i < matrixA.length; i++) {
            
            for (int j = 0; j < matrixB[0].length; j++) {
               
                for (int k = 0; k < matrixA[0].length; k++) {
                    
                    matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
                }
            }
        }
        return matrixC;
    }

    public static void main(String[] args) {

        int[][] matrixA = {
            {1, 1, 1},
            {2, 2, 2},
            {3, 3, 3}
        };

        int[][] matrixB = {
            {1, 1, 1},
            {2, 2, 2},
            {3, 3, 3}
        };


        System.out.println("First matrix: ");
        for (int i = 0; i < matrixA.length; i++) {
            for (int j = 0; j < matrixA[0].length; j++) {
                System.out.print(matrixA[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println("Second matrix: ");
        for (int i = 0; i < matrixB.length; i++) {
            for (int j = 0; j < matrixB[0].length; j++) {
                System.out.print(matrixB[i][j] + " ");
            }
            System.out.println();
        }

        int[][] matrixC = matrixMultiplication(matrixA, matrixB);

        System.out.println("Product matrix: ");

        for (int i = 0; i < matrixC.length; i++) {
            
            for (int j = 0; j < matrixC[0].length; j++) {
                
                System.out.print(matrixC[i][j] + " ");
            }
            System.out.println();
        }
    }
}
