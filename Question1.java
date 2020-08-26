
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
        if (NumOne > NumTwo && NumOne > NumThree) {
            System.out.println("The greatest of the three numbers is " + NumOne);
        } else if (NumTwo > NumOne && NumTwo > NumThree) {
            System.out.println("The greatest of the three numbers is " + NumTwo);
        } else {
            System.out.println("The greatest of the three numbers is " + NumThree);
        }
    }

    public static void main(String[] args) {

        Question1 q1 = new Question1();

        int choice ;

        Scanner scanner = new Scanner(System.in);

        do{
            System.out.println("1 : Perform comparison of numbers");
            System.out.println("2 : Exit the program");

            choice = scanner.nextInt();

            switch(choice){
                case 1 :
                q1.input();
                q1.comparison();
                break;

                default :
                System.out.println("Invalid choice. Please try again.");
                break;
            }
        }while(choice != 2);

    }
}