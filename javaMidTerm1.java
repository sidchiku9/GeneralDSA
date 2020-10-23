import java.util.*;

class Employee {
    String empCode;
    String name;
    int age;
    int experience;

    Employee(String empCode, String name, int age, int experience) {
        this.empCode = empCode;
        this.name = name;
        this.age = age;
        this.experience = experience;
    }

    void display() {
        System.out.println("Employee Code : " + empCode);
        System.out.println("Employee Name : " + name);
        System.out.println("Employee Age : " + age);
        System.out.println("Employee Experience : " + experience);
        System.out.println("\n\n");
    }

    void check() {
        int print = 0;
        if (empCode.length() == 6) {
            print++;
        }
        if (name.length() <= 30) {
            print++;
        }
        if (age > 18 && age < 58) {
            print++;
        }
        if (experience < age) {
            print++;
        }

        if (print == 4) {
            display();
        } else {
            System.out.println("You are not an employee.\n\n");
        }
    }
}

public class javaMidTerm1 {
    public static void main(String[] args) {
        Employee[] e = new Employee[5];
        Scanner scanner = new Scanner(System.in);
        String empCode;
        String name;
        int age;
        int experience;

        for (int i = 0; i < 5; i++) {
            System.out.println("Enter Details for Employee Number " + (i + 1) + "\n");
            System.out.println("Emp Code : ");
            empCode = scanner.next();
            System.out.println("Name : ");
            name = scanner.next();
            System.out.println("Age : ");
            age = scanner.nextInt();
            System.out.println("Experince : ");
            experience = scanner.nextInt();

            e[i] = new Employee(empCode, name, age, experience);
            e[i].check();
        }

        scanner.close();
    }
}
