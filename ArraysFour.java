import java.util.*;

public class ArraysFour {
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

    int duplicate(int arr[], int element) {

        getArray(arr, element);

        if (element == 0 || element == 1) {
            return element;
        }

        int j = 0;

        for (int i = 0; i < element - 1; i++) {
            if (arr[i] != arr[i + 1]) {
                arr[j++] = arr[i];
            }
        }

        arr[j++] = arr[element - 1];
        return j;
    }

    public static void main(String[] args) {

        int length = 0, element = 0, choice = 0;

        Scanner scanner = new Scanner(System.in);

        ArraysFour af = new ArraysFour();

        do {
            System.out.println("1 : Remove duplicates form the array");
            System.out.println("2 : Exit the program");

            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.printf("How many elements do you want in your array ? ");
                    element = scanner.nextInt();
                    int arr[] = new int[element];
                    length = af.duplicate(arr, element);
                    System.out.println("The size of the new array after removing duplicates : " + length);
                    break;

                case 2:
                    System.exit(1);

                default:
                    System.out.println("Invalid input. Please try again.");
                    break;
            }
        } while (choice != 2);

        scanner.close();
    }
}