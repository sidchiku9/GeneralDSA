import java.util.*;
import java.lang.*;

public class CollectionsTwo {
    public static void main(String[] args){
        ArrayList<Integer> Seq = new ArrayList<Integer>();
        Seq.add(1);
        Seq.add(3);
        Seq.add(4);
        Seq.add(5);
        Seq.add(2);

        System.out.println("Unsorted");
        for(Integer seq : Seq){
            System.out.println(seq);
        }

        Collections.sort(Seq);
        System.out.println("Sorted");
        for(Integer seq : Seq){
            System.out.println(seq);
        }

        Collections.sort(Seq,Collections.reverseOrder());
        System.out.println("Reverse Order");
        for(Integer seq : Seq){
            System.out.println(seq);
        }
    }
}
