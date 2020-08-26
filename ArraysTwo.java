import java.util.*;

public class ArraysTwo {

    Scanner scanner = new Scanner(System.in);

    void inputMatrix(int martix[][], int rows, int columns){
        System.out.println("Start entering the matrix : ");

        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < columns ; j++){
                martix[i][j] = scanner.nextInt();
            }
            System.out.println();
        }
    }

    void printMatrix(int matrix[][], int rows, int columns){
        System.out.println("Printing the matrix ");

        for(int i = 0 ; i <rows ; i++){
            for(int j = 0  ; j < columns ; j++){
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    void transpose(int matrix[][], int rows, int columns){
        
        int transposeMatrix[][] = new int[rows][columns];

        inputMatrix(matrix, rows, columns);

        for(int i = 0 ; i <rows ; i++){
            for(int j = 0 ; j < columns ; j++){
                transposeMatrix[j][i] = matrix[i][j];
            }
        }

        printMatrix(transposeMatrix, rows, columns);
    }

    public static void main(String[] args){

        int choice, rows, columns;

        Scanner scanner = new Scanner(System.in);

        ArraysTwo at = new ArraysTwo();

        System.out.println("How many rows do you want in your array ? ");
        rows = scanner.nextInt();

        System.out.println("How many columns do you want in your array ? ");
        columns = scanner.nextInt();

        int matrix[][] = new int[rows][columns];

        do{
            System.out.println("1 : Calculate the transpose of the matrix");
            System.out.println("2 : Exit the program");

            choice = scanner.nextInt();

            switch (choice) {
                case 1 :
                    at.transpose(matrix,rows,columns);
                    break;

                case 2 :
                    System.exit(1);
            
                default:
                    System.out.println("Invalid input. Please try again.");
                    break;
            }
        }while(choice != 2);
    }
    
}