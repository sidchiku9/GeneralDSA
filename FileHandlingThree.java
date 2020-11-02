import java.util.*;
import java.io.*;

public class FileHandlingThree {
    public static void main(String[] args){
        try{
            File myFile = new File("FileHandlingOne.txt");
            Scanner scanner = new Scanner(myFile);

            while(scanner.hasNextLine()){
                String data = scanner.nextLine();
                System.out.println(data);
            }
            scanner.close();
        }catch(Exception e){
            System.out.println("Couldn't read file due to error.");
            e.printStackTrace();
        }
    }
}
