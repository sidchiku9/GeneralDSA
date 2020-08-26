import java.util.Random;

public class ArraysFive {
    int sumArr(int arr[]){
        int sum = 0 ;

        for(int i = 0 ; i < 10 ; i++){
            sum += arr[i];
        }

        return sum;
    }

    public static void main(String[] args){
        int arr[] = new int[10];
        int sum = 0;

        ArraysFive arraysfive = new ArraysFive();

        Random random = new Random();

        for(int i = 0 ; i < 10 ; i++){
            arr[i] = random.nextInt(1000);
        }

        System.out.println("Printing the array : ");

        for(int i = 0 ; i < 10 ; i++){
            System.out.println(arr[i]);
        }

        sum = arraysfive.sumArr(arr);

        System.out.println("The sum of the array is : " + sum);
    }
}