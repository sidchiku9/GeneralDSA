//question 7
import java.util.Scanner;

public class Question7 {
    int primeNumber(int number){
        int m, flag = 0;

        m = number / 2;

        for(int i = 2 ; i <= m ; i++){
            if(number % i == 0){
                System.out.println("The number is not prime");
                flag = 1;
                return flag;
            }
        }
        if(flag == 0){
            System.out.println("The number is prime.");
        }
        return flag;
    }

    int revNumber(int number){
        int remainder = 0, revNum = 0, numbergetrev = number;

        while(number != 0){
            remainder = numbergetrev%10;
            revNum = revNum*10 + remainder;
            numbergetrev -= remainder;
            numbergetrev /=  10; 
        }

        return revNum;
    }

    void emrip(int number){
        int flagfor, flagback, fornumber;

        fornumber = number;

        flagfor = primeNumber(fornumber);

        flagback = primeNumber(revNumber(fornumber));

        if(flagfor == 0 && flagback == 0){
            System.out.println("The number is an EMRIP number");
        }
        else{
            System.out.println("The number is not an EMRIP number");
        }
    }

    void primeOnetoHun(){
        int m, flag = 0;
        for(int i = 1 ; i <= 100 ; i++){
            m = i/2;

            for(int j = 2 ; j <= m ; j++ ){
                if(i % j == 0){
                    flag = 1;
                }
            }
            if(flag == 0){
                System.out.println(i);
            }
        }
    }

    void pronic(int number){
        int flag = 0;

        for(int i = 0 ; i<= number ; i++){
            if(number == i*(i+1)){
                flag = 1;
            }
            else{
                flag = 0;
            }
        }

        if(flag == 1){
            System.out.println("The number is a PRONIC number");
        }
        else{
            System.out.println("The number is not a PRONIC number");
        }
    }
    public static void main(String[] args){
        int number, choice;

        Scanner scanner = new Scanner(System.in);

        Question7 q7 = new Question7();

        number = scanner.nextInt();

        do{
            System.out.println("1 : Check if number is PRONIC");
            System.out.println("2 : Check if number is EMRIP");
            System.out.println("3 : Print prime numbers from 1 to 100");
            System.out.println("4 : EXIT");

            choice = scanner.nextInt();

            switch (choice) {
                case 1 :
                    q7.pronic(number);
                    break;
                
                case 2 :
                    q7.emrip(number);
                    break;

                case 3 :
                    q7.primeOnetoHun();
                    break;

                case 4 :
                    System.exit(1);

                default:
                    System.out.println("Invalid choice. Please enter again.");
                    break;
            }
        }while(choice != 4);

    }
}