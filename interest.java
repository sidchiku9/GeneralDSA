//question 6

import java.util.*;

//SI : Amount = P(1 + rt) t : time in years
//CI : Amount = P(1 + r/n)nt n : number of times the interest is applied t : number of time periods 

public class interest {
    public static void main(String[] args) {
        int SI, P1, R1, T1;
        int CI, P2, R2, N, T2;
        int choice;

        Scanner scanner = new Scanner(System.in);

        do {
            System.out.println("Enter '1' to calculate SIMPLE INTEREST");
            System.out.println("Enter '2' to calculate COMPUND INTEREST");
            System.out.println("Entee '3' to exit.");

            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("\t\t SIMPLE INTEREST  : ");

                    System.out.println("Enter the PRINCIPAL amount : ");
                    P1 = scanner.nextInt();

                    System.out.println("Enter the RATE of INTEREST : ");
                    R1 = scanner.nextInt();

                    System.out.println("Enter the TIME in YEARS : ");
                    T1 = scanner.nextInt();

                    SI = P1 * (1 + R1 * T1);

                    System.out.println("The SIMPLE INTEREST with the given values is : " + SI);
                    break;

                case 2:
                    System.out.println("\t\t COMPUND INTEREST  : ");

                    System.out.println("Enter the PRINCIPAL amount : ");
                    P2 = scanner.nextInt();

                    System.out.println("Enter the RATE of INTEREST : ");
                    R2 = scanner.nextInt();

                    System.out.println("Enter the TIME PERIODS elapsed : ");
                    T2 = scanner.nextInt();

                    System.out.println("Entger the NUMBER of TIMES INTEREST is applied : ");
                    N = scanner.nextInt();

                    CI = P2 * (1 + R2 / N) * N * T2;
                    System.out.println("The COMPOUND INTEREST with the given values is : " + CI);
                    break;

                case 3:
                    break;

                default:
                    System.out.println("Invalid input. Please try again");
            }
        } while (choice != 3);
    }
}