//question 3

import java.util.*;

//prism,cone,cylinder,sphere

public class areavolume {
    public static void main(String[] args) {
        int radius = 0, height = 0;
        int basePrism = 0, heightPrism = 0;
        int choice;
        double volume = 0;

        Scanner scanner = new Scanner(System.in);

        do {
            System.out.println("Enter '1' to calculate the volume of CONE");
            System.out.println("Enter '2' to calculate the volume of CYLINDER");
            System.out.println("Enter '3' to calculate the volume of SPHERE");
            System.out.println("Enter '4' to calculate the volume of PRISM");
            System.out.println("Enter '5' to exit");

            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Enter the radius of the base of the cone : ");
                    radius = scanner.nextInt();

                    System.out.println("Enter the height of the cone : ");
                    height = scanner.nextInt();

                    volume = 0.33 * 3.14 * radius * radius * height;

                    System.out.println("Volume of the cone is " + volume);
                    break;

                case 2:
                    System.out.println("Enter the radius of the base of the cylinder : ");
                    radius = scanner.nextInt();

                    System.out.println("Enter the height of the cylinder : ");
                    height = scanner.nextInt();

                    volume = 3.14 * radius * radius * height;

                    System.out.println("Volume of the cylinder is " + volume);
                    break;

                case 3:
                    System.out.println("Enter the radius of the sphere: ");
                    radius = scanner.nextInt();

                    volume = 1.33 * 3.14 * radius * radius * radius;

                    System.out.println("Volume of the sphere is " + volume);
                    break;

                case 4:
                    System.out.println("Enter the area of the base of the prism : ");
                    basePrism = scanner.nextInt();

                    System.out.println("Enter the height of the prism: ");
                    heightPrism = scanner.nextInt();

                    volume = basePrism * heightPrism;

                    System.out.println("Volume of the prism is " + volume);
                    break;

                default:
                    break;
            }
        } while (choice != 5);
    }

}