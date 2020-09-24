import java.lang.*;
import java.util.*;

class Palindrome extends Thread {
    int number;

    Palindrome(int number) {
        this.number = number;
    }

    public void run() {
        int numberCopy = number;
        int remainder = 0, revNum = 0;

        while (numberCopy != 0) {
            remainder = numberCopy % 10;
            revNum = revNum * 10 + remainder;
            numberCopy -= remainder;
            numberCopy /= 10;
        }

        if (revNum == number) {
            System.out.println("The number is a palindrome");
        } else {
            System.out.println("The number is not a palindrome");
        }
    }
}

class PrimeNumber extends Thread {
    int limit;

    PrimeNumber(int number) {
        this.limit = number;
    }

    public void run() {
        int ct = 0, n = 0, i = 1, j = 1;
        while (n < limit) {
            j = 1;
            ct = 0;
            while (j <= i) {
                if (i % j == 0)
                    ct++;
                j++;
            }
            if (ct == 2) {
                System.out.printf("%d ", i);
                n++;
            }
            i++;
        }
    }
}

public class JAVADA2QUE1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number you want to check for palindrome : ");
        int palinNumber = scanner.nextInt();

        System.out.println("Enter the limit of prime numbers you wanna print : ");
        int limit = scanner.nextInt();

        System.out.println("Running threads : ");

        Palindrome p = new Palindrome(palinNumber);
        PrimeNumber pn = new PrimeNumber(limit);

        p.start();
        pn.start();
    }
}
