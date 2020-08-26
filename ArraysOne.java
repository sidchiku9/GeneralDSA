import java.util.*;

public class ArraysOne {

    void printMatrix(int matrix[][], int rows, int columns) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    void addMatrix(int matrixOne[][], int matrixTwo[][], int rowsOne, int columnsOne, int rowsTwo, int columnsTwo) {

        if (rowsOne == rowsTwo && columnsOne == columnsTwo) {
            int rows = rowsOne, columns = columnsOne;
            int addMatrix[][] = new int[rows][columns];

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    addMatrix[i][j] = matrixOne[i][j] + matrixTwo[i][j];
                }
            }

            System.out.println("The ADDITION of the two matrices results in : ");
            printMatrix(addMatrix, rows, columns);
        } else {
            System.out.println("Addition of Matrices not possible as the order is different.");
        }
    }

    void mulMatrix(int matrixOne[][], int matrixTwo[][], int rowOne, int columnOne, int rowTwo, int columnTwo) {
        if (columnOne != rowTwo) {
            System.out.println("Matrix multiplication not possible");
        } else {
            int mulMatrix[][] = new int[rowOne][columnTwo];

            for (int i = 0; i < rowOne; i++) {
                for (int j = 0; j < columnTwo; j++) {
                    mulMatrix[i][j] = 0;
                    for (int k = 0; k < columnTwo; k++) {
                        mulMatrix[i][j] += matrixOne[i][k] * matrixTwo[k][j];
                    }
                }
            }

            printMatrix(mulMatrix, rowOne, columnTwo);
        }
    }

    public static void main(String[] args) {
        int rowsOne, rowsTwo, columnsOne, columnsTwo, choice;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the  number of rows of the first matrix");
        rowsOne = scanner.nextInt();

        System.out.println("Enter the  number of columns of the first matrix");
        columnsOne = scanner.nextInt();

        System.out.println("Please start entering matrix 1");

        int matrixOne[][] = new int[rowsOne][columnsOne];

        for (int i = 0; i < rowsOne; i++) {
            for (int j = 0; j < columnsOne; j++) {
                matrixOne[i][j] = scanner.nextInt();
            }
            System.out.println();
        }

        System.out.println("Enter the  number of rows of the second matrix");
        rowsTwo = scanner.nextInt();

        System.out.println("Enter the  number of columns of the second matrix");
        columnsTwo = scanner.nextInt();

        int matrixTwo[][] = new int[rowsTwo][columnsTwo];

        System.out.println("Please start entering matrix 2");

        for (int i = 0; i < rowsTwo; i++) {
            for (int j = 0; j < columnsTwo; j++) {
                matrixTwo[i][j] = scanner.nextInt();
            }
            System.out.println();
        }

        ArraysOne ao = new ArraysOne();

        do {
            System.out.println("1 : Perform matrix addition");
            System.out.println("2 : Perform matrix multiplication");
            System.out.println("3 : Exit the program");

            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    ao.addMatrix(matrixOne, matrixTwo, rowsOne, columnsOne, rowsTwo, columnsTwo);
                    break;

                case 2:
                    ao.mulMatrix(matrixOne, matrixTwo, rowsOne, columnsOne, rowsTwo, columnsTwo);
                    break;

                case 3:
                    System.exit(1);

                default:
                    System.out.println("Invalid input. Please try again.");
                    break;
            }
        } while (choice != 3);
    }

}