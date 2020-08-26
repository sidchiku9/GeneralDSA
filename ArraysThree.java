import java.util.*;

public class ArraysThree {
    Scanner scanner = new Scanner(System.in);

    void getArray(int arr[], int elements) {
        System.out.println("Please start enetering the array elements");

        for (int i = 0; i < elements; i++) {
            arr[i] = scanner.nextInt();
        }
    }

    void printArray(int arr[], int elements) {
        System.out.println("Printing the array");

        for (int i = 0; i < elements; i++) {
            System.out.println(arr[i]);
        }
    }

    void oddEve(int arr[], int elements) {
        int reqdArray[] = new int[elements];
        int counter = 0;

        getArray(arr, elements);

        for (int i = 0; i < elements; i++) {
            if (arr[i] % 2 == 0) {
                reqdArray[counter] = arr[i];
                counter++;
            }
        }

        for (int i = 0; i < elements; i++) {
            if (arr[i] % 2 != 0) {
                reqdArray[counter] = arr[i];
                counter++;
            }
        }

        printArray(reqdArray, elements);
    }

    public static void main(String[] args) {
        int choice;
        int elements = 0;

        ArraysThree at = new ArraysThree();

        Scanner scanner = new Scanner(System.in);

        do {

            System.out.println("1 : Perform EVEN-ODD sort function");
            System.out.println("2 : Exit the program");

            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("How many elements do you want in your array ? ");
                    elements = scanner.nextInt();
                    int arr[] = new int[elements];
                    at.oddEve(arr, elements);
                    break;

                case 2:
                    System.exit(1);

                default:
                    System.out.println("Invalid input. Please try again.");
                    break;
            }
        } while (choice != 2);
    }

}