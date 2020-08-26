
//question 7
import java.util.Scanner;

public class Question7 {
    boolean primeNumber(int number) {
        int m;
        boolean flag = true;

        m = number / 2;

        for (int i = 2; i <= m; i++) {
            if (number % i == 0) {
                flag = false;
                return flag;
            }
        }

        return flag;
    }

    int revNumber(int number) {
        int remainder = 0, revNum = 0;

        while (number != 0) {
            remainder = number % 10;
            revNum = revNum * 10 + remainder;
            number -= remainder;
            number /= 10;
        }

        return revNum;
    }

    void emrip(int number) {
        boolean flagfor, flagback;
        int revNum;

        flagfor = primeNumber(number);

        revNum = revNumber(number);

        flagback = primeNumber(revNum);

        if (flagfor && flagback) {
            System.out.println("The number is an EMRIP number");
        } else {
            System.out.println("The number is not an EMRIP number");
        }
    }

    void primeOnetoHun() {
        for (int i = 1; i <= 100; i++) {
            if (primeNumber(i)) {
                System.out.println(i);
            }
        }
    }

    void pronic(int number) {
        int flag = 0;

        for (int i = 0; i < number; i++) {
            if (i * (i + 1) == number) {
                flag = 1;
                break;
            } else {
                flag = 0;
            }
        }

        if (flag == 1) {
            System.out.println("The number is a PRONIC number");
        } else {
            System.out.println("The number is not a PRONIC number");
        }
    }

    public static void main(String[] args) {
        int number, choice;

        Scanner scanner = new Scanner(System.in);

        Question7 q7 = new Question7();

        do {
            System.out.println("1 : Check if number is PRONIC");
            System.out.println("2 : Check if number is EMRIP");
            System.out.println("3 : Print prime numbers from 1 to 100");
            System.out.println("4 : EXIT");

            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Enter the number to be tested");
                    number = scanner.nextInt();
                    q7.pronic(number);
                    break;

                case 2:
                    System.out.println("Enter the number to be tested");
                    number = scanner.nextInt();
                    q7.emrip(number);
                    break;

                case 3:
                    q7.primeOnetoHun();
                    break;

                case 4:
                    System.exit(1);

                default:
                    System.out.println("Invalid choice. Please enter again.");
                    break;
            }
        } while (choice != 4);

    }
}