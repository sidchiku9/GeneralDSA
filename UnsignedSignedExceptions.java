import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.*;

public class UnsignedSignedExceptions {

    public void readFile() throws FileNotFoundException {
        File file = new File("this_file_doesnt_exist.txt");
        FileInputStream input = new FileInputStream(file);
        throw new FileNotFoundException("The file doesn't exist");
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int result, numerator = 2, denominator = 0, choice = 0, data;

        // checked exception
        UnsignedSignedExceptions use = new UnsignedSignedExceptions();
        try {
            use.readFile();
        } catch (Exception e) {
            System.out.println("Exception caught...normal flow");
        }

        // unchecked exception
        try {
            result = numerator / denominator;

            System.out.println("Result : " + result);
        } catch (Exception e) {
            System.out.println("Arithmetic Exception");

            denominator += 2;
        } finally {
            System.out.println("This is the finally block.");
        }

        int arr[] = new int[5];

        System.out.println("Enter the index you want to enter your element");
        choice = scanner.nextInt();

        if (choice > 4) {
            throw new ArrayIndexOutOfBoundsException("This is outside the size of the array");
        } else {
            System.out.println("Enter the data that you wanna enter");
            data = scanner.nextInt();
            arr[choice] = data;
        }

    }
}