public class ExceptionHandlingThree {
    public static void main(String[] args){
        try{
            try{
                System.out.println("Going to divide");
                int b = 39 / 0;
            }catch(ArithmeticException a){
                System.out.println(a);
            }

            try{
                int a[] = new int[5];
                a[5] = 4;
            }catch(ArrayIndexOutOfBoundsException arr){
                System.out.println(arr);
            }
        }catch(Exception e){
            System.out.println(e);
        }
    }
}
