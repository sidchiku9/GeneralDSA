import java.util.*;

public class Lab1P2 {
    public static void main(String[] args){
        int sum, n, first, second;
        first = 1;
        second = 1;

        System.out.println("Enter the nth term till you want the Fibonacci series to continue : ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        System.out.print("The Fibonnaci series till the nth term is as follows : \n");
        System.out.println(first);
        System.out.println(second);

        sum = first + second ; 

        System.out.println(sum);

        for(int i = 1 ; i < n ; i++){
            sum += i;
            System.out.println(sum);
        }
    }
}