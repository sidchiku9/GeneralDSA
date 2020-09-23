import java.io.*;
import java.lang.*;

class VoteEligibility extends Exception{
    VoteEligibility(String s){
        super(s);
    }
}

public class JAVADA2QUE3 {

    static void VoteEligible(int age) throws VoteEligibility{
        if(age > 18){
            System.out.println("You're eligible to vote");
        }
        else{
            throw new VoteEligibility("You're a minor. Go back and study.");
        }
    }
    public static void main(String[] args){
        
        //checked exception
        try{
            File file = new File("sidchiku9/unchecked.txt");
            FileReader fr = new FileReader(file);
        }catch(FileNotFoundException f){
            System.out.println("Checked Exception");
            System.out.println("EXCEPTION : " + f);
        }

        System.out.println();

        //unchecked exception
        try{
            int a[] = new int[5];
            a[5] = 10;
        }catch(ArrayIndexOutOfBoundsException a){
            System.out.println("Unchecked exception");
            System.out.println("EXCEPTION : " + a);
        }

        System.out.println();

        //custom exception
        try{
            VoteEligible(17);
        }
        catch(VoteEligibility v){
            System.out.println(v);
        }
        
    }
}
