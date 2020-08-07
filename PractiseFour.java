import java.util.*;

public class PractiseFour {
    public static void main(String[] args){
        double num , sum = 0.00 ;
        int n ;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the limit 'n' of the HARMONIC series : ");
        n = scanner.nextInt();

        for(int i = 0 ; i <= n ; i++){
            num = 1.00 / n ;
            sum = sum + num ;
        }

        System.out.println("The required sum is : " + sum);
    }
}