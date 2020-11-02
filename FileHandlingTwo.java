import java.io.*;

public class FileHandlingTwo {
    public static void main(String[] args){
        try{
            FileWriter writeTo = new FileWriter("FileHandlingOne.txt");
            writeTo.write("Learning file handling in Java");
            writeTo.close();
        }catch(Exception e){
            System.out.println("Couldn't write to file due to error");
            e.printStackTrace();
        }
    }
}
