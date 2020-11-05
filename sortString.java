import java.util.*; 
  
public class sortString  
{ 
    public static String sortString(String inputString) 
    { 
        char tempArray[] = inputString.toCharArray(); 
        Arrays.sort(tempArray); 
        return new String(tempArray); 
    } 
      
    public static void main(String[] args) 
    { 
        System.out.println("Enter the string you want to sort : ");

        Scanner scanner = new Scanner(System.in);
        String inputString = ""; 
        inputString += scanner.nextLine();
        scanner.close();

        String outputString = sortString(inputString); 
        System.out.println("Sorted String : " + outputString); 
    } 
} 