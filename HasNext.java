import java.util.*;

public class HasNext{
    public static void main(final String args[]) {
        int sum = 0;

        final Scanner scanner = new Scanner(System.in);

        while (scanner.hasNext()) {
            final int element = scanner.nextInt();
            sum += element;
        }
        scanner.close();

        System.out.print(sum);
    }
}

