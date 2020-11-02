import java.io.*;

public class FileHandlingOne{
    public static void main(String[] args){
        try{
            File myFile = new File("FileHandlingOne.txt");

            if(myFile.createNewFile()){
                System.out.println("File created : " + myFile.getName());
            }
            else{
                System.out.println("File already exists");
            }
        }catch(Exception e){
            System.out.println("An error occurred while creating the file. FILE NOT CREATED.");
            e.printStackTrace();
        }
    }
}