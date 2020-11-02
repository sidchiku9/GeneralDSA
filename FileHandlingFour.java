import java.io.*;

public class FileHandlingFour {
    public static void main(String[] args){
        File file = new File("FileHandlingOne.txt");

        if(file.exists()){
            System.out.println("File name : " + file.getName());
            System.out.println("File location : " + file.getAbsolutePath());
            System.out.println("Readable : " + file.canRead());
            System.out.println("Writeable : " + file.canWrite());
            System.out.println("Size : " + file.length());
        }
    }
}
