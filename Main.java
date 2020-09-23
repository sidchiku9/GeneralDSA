import java.util.LinkedList; 
  class Demo { 
public void disp() 
    { 
        LinkedList<String> list = new LinkedList<String>(); 
        list.add("Element1");   
        list.add("Element2"); 
        System.out.print(list.getFirst());   
    } 
} public class Main { 
public static void main(String[] args) 
    { 
        Demo demo = new Demo(); 
demo.disp();
      
    } 
}