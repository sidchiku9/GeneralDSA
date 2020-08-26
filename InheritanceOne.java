import java.util.*;
import java.lang.*;

class Publication {

    Scanner scanner = new Scanner(System.in);

    public int sNo;
    public String title[] = new String[10];
    public String author;
    public int year;
    public double price;

    public void getData() {
        System.out.println("Serial Number : ");
        sNo = scanner.nextInt();

        int choice = 0;
        int counter = 0;

        scanner.nextLine();
        System.out.println("Author : ");
        author = scanner.nextLine();

        do {
            scanner.nextLine();
            System.out.println("Title : ");
            title[counter] = scanner.nextLine();

            System.out.println("Does the author have more titles ? (max 10)");
            System.out.println("If yes then enter '1' else enter '2'");

            choice = scanner.nextInt();
            counter++;

        } while (choice != 2);

        scanner.nextLine();

        System.out.println("Year : ");
        year = scanner.nextInt();

        System.out.println("Amount : ");
        price = scanner.nextDouble();
    }

    public void showDetails() {
        System.out.println("Serial Number : " + sNo);

        System.out.println("Title : ");
        System.out.println("Author : " + author);
        System.out.println("Title : ");
        for (int i = 0; i < title.length; i++) {
            if (title[i] == null) {
                break;
            }
            System.out.print(title[i] + " ");
        }
        System.out.println();
        System.out.println("Year : " + year);
        System.out.println("Price : " + price);
    }
}

class Books extends Publication {

    public int pages;

    @Override
    public void getData() {
        System.out.println("\t Enter Book details");
        super.getData();
        System.out.println("Enter the number of pages of the book : ");
        pages = scanner.nextInt();
    }

    @Override
    public void showDetails() {
        System.out.println("\t Book details : ");
        super.showDetails();
        System.out.println("Pages " + pages);
    }
}

class Media extends Publication {

    public int minutes;

    @Override
    public void getData() {
        System.out.println("\t Enter Media details");
        super.getData();
        System.out.println("Enter the duration of the CD(in minutes) : ");
        minutes = scanner.nextInt();
    }

    @Override
    public void showDetails() {
        System.out.println("\t Media details : ");
        super.showDetails();
        System.out.println("Minutes " + minutes);
    }
}

public class InheritanceOne {
    public static void main(String[] args) {

        int choice;

        Scanner scanner = new Scanner(System.in);

        do {
            Books b = new Books();
            Media m = new Media();

            System.out.println("\t OPTIONS");
            System.out.println("1 : BOOK details");
            System.out.println("2 : Media detials");
            System.out.println("3 : Exit the program");

            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    b.getData();
                    b.showDetails();
                    break;

                case 2:
                    m.getData();
                    m.showDetails();
                    break;

                case 3:
                    System.exit(1);

                default:
                    break;
            }

        } while (choice != 3);

        scanner.close();
    }
}