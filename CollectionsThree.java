import java.util.*;

class Student{
    Integer rollNumber;
    String name;
    Integer age;

    Student(Integer rollNumber, String name, Integer age){
        this.rollNumber = rollNumber;
        this.name = name;
        this.age = age;
    }
}

public class CollectionsThree{
    public static void main(String[] args){
        Student s1 = new Student(1, "Siddharth", 19);
        Student s2 = new Student(2, "Harshit", 19);
        Student s3 = new Student(3, "Bari", 20);

        ArrayList<Student> studentList = new ArrayList<Student>();
        studentList.add(s1);
        studentList.add(s2);
        studentList.add(s3);

        Iterator iterator = studentList.iterator();

        while(iterator.hasNext()){
            Student student = (Student)iterator.next();
            System.out.println(student.name + "\t" + student.rollNumber + "\t" + student.age);
        }
    }
}
