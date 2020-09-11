package p1;

public class packOne{
    public int add(int x, int y){
        return x + y;
    }
    public static void main(String[] args){
        packOne obj = new packOne();
        System.out.println(obj.add(10,20));
    }
}