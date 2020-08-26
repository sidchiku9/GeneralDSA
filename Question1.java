
//question 1
import java.util.Scanner;

public class Question1 {
    int NumOne, NumTwo, NumThree, choice;

    void input() {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the first of the three numbers : ");
        NumOne = scanner.nextInt();

        System.out.println("Enter the second of the three numbers : ");
        NumTwo = scanner.nextInt();

        System.out.println("Enter the last of the three numbers : ");
        NumThree = scanner.nextInt();
    }

    void comparison() {

        System.out.println("Using if-else conditional statement");

        if (NumOne > NumTwo && NumOne > NumThree) {
            System.out.println("The greatest of the three numbers is " + NumOne);
        } else if (NumTwo > NumOne && NumTwo > NumThree) {
            System.out.println("The greatest of the three numbers is " + NumTwo);
        } else {
            System.out.println("The greatest of the three numbers is " + NumThree);
        }
    }

    void ternary() {
        boolean numOne, numTwo;

        numOne = (NumOne > NumTwo && NumOne > NumThree) ? (true) : (false);
        numTwo = (NumTwo > NumOne && NumTwo > NumThree) ? (true) : (false);

        System.out.println("Using the ternary operator");

        if (numOne) {
            System.out.println("The first number entered " + NumOne + " is the largest");
        } else if (numTwo) {
            System.out.println("The second number entered " + NumTwo + " is the largest");
        } else {
            System.out.println("The third number entered " + NumThree + " is the largest");
        }

    }

    public static void main(String[] args) {

        Question1 q1 = new Question1();

        int choice;

        Scanner scanner = new Scanner(System.in);

        do {
            System.out.println("1 : Perform comparison of numbers using if-else");
            System.out.println("2 : Perform comparison of numbers using ternary operator.");
            System.out.println("3 : Exit the program");

            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    q1.input();
                    q1.comparison();
                    break;

                case 2:
                    q1.input();
                    q1.ternary();
                    break;

                case 3:
                    System.exit(1);

                default:
                    System.out.println("Invalid choice. Please try again.");
                    break;
            }
        } while (choice != 3);
    }
}