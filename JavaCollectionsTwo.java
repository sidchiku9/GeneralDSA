import java.util.*;
import java.lang.*;

public class JavaCollectionsTwo {
    public static void main(String[] args){
        LinkedList<String> linkedList = new LinkedList<String>();
        Iterator iterator = linkedList.iterator();

        linkedList.add("Siddharth");
        linkedList.add("Agrawal");
        linkedList.addFirst("Name : ");
        linkedList.addLast("\tsidchiku9");

        while(iterator.hasNext()){
            System.out.print(iterator.next() + " ");
        }
    }
}
