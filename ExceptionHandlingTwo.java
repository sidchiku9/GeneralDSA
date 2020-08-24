public class ExceptionHandlingTwo {
    public static void main(String[] args) {
        int data;

        try {
            data = 50 / 0;
        } catch (Exception e) {
            System.out.println("Error : " + e);
            data
        }

        System.out.println("Outside try-catch");
    }
}