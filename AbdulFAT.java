package StringManip;

interface StringManipulator{
    public void findVerbs();
    public void findconjunctions();
    public void findwordcount();
}

import StringManip.*;
import java.io.*;
import java.util.*;

public class QuestionFive implements StringManipulator{
    public void findVerbs(String s){

    }
    public void findconjunctions(String s){

    }
    public void findwordcount(String s){

    }
    public static void main(String[] args){
        try{
            File labfat = new File("file-name.txt");
        }catch(Exception e){
            e.printStackTrace();
        }

    }
}