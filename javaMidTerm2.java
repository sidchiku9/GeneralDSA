class University {
    class Department {
        String dept_name = "Inner department";
        int dept_number = 2;
        int strength = 50;

        void print() {
            System.out.println("University Name : " + Name);
            System.out.println("University Code : " + University_Code);
            System.out.println("Department Name : " + dept_name);
            System.out.println("University Name : " + dept_number);
            System.out.println("University Name : " + strength);
        }
    }

    private int University_Code = 1;
    private String Name = "VIT Vellore";

    void admit() {
        System.out.println("You are admitted to the University");
    }

    void conductExam() {
        System.out.println("Your FATs will be conducted in December");
    }
}

public class javaMidTerm2 {// test class
    public static void main(String[] args) {
        University.Department dep = new University().new Department();
        dep.print();
    }
}