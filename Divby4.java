import java.util.*;

class Divby4 {
    public static void main(String[] args) {
        // put your code here
        int size,elements,largest = 0, i = 0, divbyFour = 0;
        Scanner scanner = new Scanner(System.in);
        
        size = scanner.nextInt();
        
        while(i < size){
            elements = scanner.nextInt();
            
            if(elements % 4 == 0){
                divbyFour = elements;
            }
            
            if(divbyFour > largest){
                largest = divbyFour;
            }
            i++;
        }
        
        System.out.print(largest);
    }
}