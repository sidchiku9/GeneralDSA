import java.util.ArrayList;
import java.util.Iterator;
import java.util.*;


public class CollectionsOne{
    public static void main(String[] args){
        ArrayList<String> names = new ArrayList<String>();
        String name;
        Scanner scanner = new Scanner(System.in);
        int choice;

        do{
            System.out.println("Enter a name");
            name = scanner.next();
            names.add(name);
            System.out.println("Do you wanna enter more names ? If so enter any integer except 1 ");
            choice = scanner.nextInt();
        }while(choice != 1);

        Iterator iterator = names.iterator();

        System.out.println("Names : ");
        while(iterator.hasNext()){
            System.out.println(iterator.next());
        }

        System.out.println(names.get(1));

        names.set(1, "YOYO");

        System.out.println("Names : ");
        while(iterator.hasNext()){
            System.out.println(iterator.next());
        }

    }
}