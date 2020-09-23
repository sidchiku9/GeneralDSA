interface X
{
    int i = 5;
}
 
class Z implements X 
{
    void f()
    {
    	i = 10;
    	System.out.println("i="+i);
        
    }
}
public class Y{

	public static void main(String[] args) {
		
		Z obj = new Z();
		obj.f();	
	}
}