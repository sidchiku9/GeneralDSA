import java.util.*;

class EvenNumber implements Runnable {

    int limit;

    EvenNumber(int limit) {
        this.limit = limit;
    }

    public void run() {
        for (int i = 0; i <= limit; i++) {
            if (i % 2 == 0) {
                String test = Thread.currentThread().getName();
                boolean isAlive = Thread.currentThread().isAlive();
                System.out.println(test + " status : " + isAlive);
                System.out.println(test + " " + i);

                try {
                    Thread.currentThread().sleep(1000);
                } catch (InterruptedException e) {
                }
            }
        }
    }
}

class OddNumber implements Runnable {

    int limit;

    OddNumber(int limit) {
        this.limit = limit;
    }

    public void run() {
        for (int i = 0; i <= limit; i++) {
            if (i % 2 != 0) {
                String test = Thread.currentThread().getName();
                boolean isAlive = Thread.currentThread().isAlive();
                System.out.println(test + " status : " + isAlive);
                System.out.println(test + " " + i);

                try {
                    Thread.currentThread().sleep(1000);
                } catch (InterruptedException e) {
                }
            }
        }
    }
}

public class JAVADA2QUE2 {
    public static void main(String[] args) {
        int limit = 0;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the limit of the printing process : ");
        limit = scanner.nextInt();

        EvenNumber en = new EvenNumber(limit);
        OddNumber on = new OddNumber(limit);

        Thread t1 = new Thread(en);
        Thread t2 = new Thread(on);

        t1.start();
        t2.start();

    }
}
