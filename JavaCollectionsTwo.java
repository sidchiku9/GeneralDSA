import java.util.*;
import java.lang.*;

public class JavaCollectionsTwo {
    public static void main(String[] args){
        LinkedList<String> linkedList = new LinkedList<String>();
        
        linkedList.add("Name : ");
        linkedList.add("Siddharth");
        linkedList.add("Agrawal");
        linkedList.add("\tUsername : sidchiku9");

        Iterator iterator = linkedList.iterator();

        while(iterator.hasNext()){
            System.out.print(iterator.next() + " ");
        }
    }
}
