import java.util.*;
import java.lang.*;

public class ExceptionHandlingOne{
    public static void main(String[] args){
        int data;

        try {
            data = 50 / 0;
        } catch (Exception e) {
            System.out.println("Error : " + e);
            System.out.println("Please enter a new denominator");
        }

        System.out.println("Outside try-catch");
    }
}