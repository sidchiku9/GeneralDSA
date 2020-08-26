//multi-dimensional array and jagged array

public class ArraysSIx {
    public static void main(String[] args) {

        // declaring a two dimensional array with 2 rows

        int jagged[][] = new int[2][];

        // assigning different number of columns to different rows

        jagged[0] = new int[4]; // first row with four columns
        jagged[1] = new int[3]; // second row with three columns

        int count = 0;

        for (int i = 0; i < jagged.length; i++) {
            for (int j = 0; j < jagged[i].length; j++) {
                jagged[i][j] = count;
                count++;
            }
        }

        System.out.println("Printing the element of the jagged array : ");

        for (int i = 0; i < jagged.length; i++) {
            for (int j = 0; j < jagged[i].length; j++) {
                System.out.println(jagged[i][j] + " ");
            }
            System.out.println();
        }

        // declaring a multi-dimensional array with 2 rows

        int multi[][] = new int[2][2];

        count = 0;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                multi[i][j] = count;
                count++;
            }
        }

        System.out.println("Printing the elements of multi-dimensional array : ");

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.println(multi[i][j] + " ");
            }
            System.out.println();
        }

    }
}