import java.util.*;

public class JavaCollectionsOne{
    public static void main(String[] args){
        ArrayList<Integer> firstList = new ArrayList<Integer>();
        firstList.add(1);
        firstList.add(2);
        firstList.add(3);

        Iterator iterator = firstList.iterator();

        while(iterator.hasNext()){
            System.out.print(iterator.next() + " ");
        }
    }
}