//simple interest : amount = p(1 + rt)

import java.util.*;

public class OverloadingOne {
    double principal, amount;
    int rate, time;

    OverloadingOne(double principal, int rate, int time) {
        this.principal = principal;
        this.rate = rate;
        this.time = time;
    }

    void simpleInterest() {
        amount = principal * (1 + (rate / 100.00) * time);
        System.out.println("\t SIMPLE INTEREST ");
        System.out.println("Principal Amount : " + principal);
        System.out.println("Rate of SI : " + rate);
        System.out.println("Time " + time);
        System.out.println();
        System.out.println("Simple Interest : " + amount);
        System.out.println();
    }

    public static void main(String[] args){

        int choice ;
        Scanner scanner = new Scanner(System.in);

        double principal;
        int rate, time;

        do{
            System.out.println("1 : Calculate Simple Interest");
            System.out.println("2 : Exit the program");

            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Hello user. Enter your principal amount");
                    principal = scanner.nextDouble();
                    System.out.println("Enter the time for which SI is calculated (in years)");
                    time = scanner.nextInt();
                    System.out.println("Enter the rate of SI");
                    rate = scanner.nextInt();

                    OverloadingOne oo = new OverloadingOne(principal, rate, time);
                    oo.simpleInterest();
                    break;

                case 2:
                    System.exit(1);
            
                default:
                    break;
            }
        }while(choice != 2);

        scanner.close();
    }
}