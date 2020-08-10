import java.util.*; 
public class MinMax{
	public static void main(String[] args){
		int i , j ;
		int rows, columns;
		int min, max;
		Scanner scanner = new Scanner(System.in);

		System.out.println("How many rows do you want ?");
		rows = scanner.nextInt();

		System.out.println("How many columns do you want ?");
		columns = scanner.nextInt();

		int arr[][] = new int[rows][columns];

		for(i = 0 ; i < rows ; i++){
			for(j = 0 ; j < columns ; j++){
				arr[i][j] = scanner.nextInt();
			}
		}

		min = arr[0][0];
		max = arr[0][0];

		for(i = 0 ; i < rows ; i++){
			for(j = 0 ; j < columns ; j++){
				if(arr[i][j] < min){
					min = arr[i][j];
				}
				if(arr[i][j] > max){
					max = arr[i][j];
				}
			}
		}

		System.out.println("The minimium element of the 2D array is " + min);
		System.out.println("The maximum element of the 2D array is " + max);

	}
}