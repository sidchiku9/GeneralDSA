import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.*;

public class CollectionsOne{
    public static void main(String[] args){
        ArrayList<String> names = new ArrayList<String>();
        names.add("Siddharth");
        names.add("Avanee");
        names.add("Deepti");
        names.add("Meetali");

        Iterator iterator = names.iterator();

        while(iterator.hasNext()){
            System.out.println("Name : " + iterator.next());
        }
    
    }
}