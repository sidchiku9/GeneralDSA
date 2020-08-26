//question 2

import java.util.*;

public class factorial {
    public static void main(String[] args) {
        int num;

        System.out.println("Enter the number you want to calculate the factorial for : ");

        Scanner scanner = new Scanner(System.in);

        num = scanner.nextInt();

        for (int i = num - 1; i > 0; i--) {
            num *= i;
        }
        System.out.println(num);

    }
}