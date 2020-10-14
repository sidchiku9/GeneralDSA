import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.GregorianCalendar;
import java.util.Scanner;

class Donor implements Serializable {
    String name, address, bgroup;
    Date dold;
    int age, contactNumber;

    Donor(String name, String address, String bgroup, Date dold, int age, int contactNumber) {
        this.name = name;
        this.address = address;
        this.bgroup = bgroup;
        this.dold = dold;
        this.age = age;
        this.contactNumber = contactNumber;
    }

    public void display() {
        System.out.println("Name : " + name + "\nAddress : " + address + "\nBlood group : " + bgroup
                + "\nDate of last donation : " + dold + "\nAge : " + age + "\nContact Numer : " + contactNumber);
    }
}

public class Donations {
    public static int getMonths(Date start, Date end) {
        Calendar startCal = new GregorianCalendar();
        startCal.setTime(start);
        Calendar endCal = new GregorianCalendar();
        endCal.setTime(end);

        int diffYear = endCal.get(Calendar.YEAR) - startCal.get(Calendar.YEAR);
        int diffMonth = diffYear * 12 + endCal.get(Calendar.MONTH) - startCal.get(Calendar.MONTH);

        return diffMonth;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Donor donors[] = new Donor[3];

        try {
            SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
            donors[0] = new Donor("Virat Kohli", "2172", "O+ve", sdf.parse("13/09/2020"), 21, 98932);
            donors[1] = new Donor("Jofra Archer", "2012", "AB+ve", sdf.parse("12/05/2020"), 21, 96305);
            donors[2] = new Donor("Rahul Gandhi", "0888", "A+ve", sdf.parse("12/04/2019"), 21, 88397);
        } catch (ParseException e) {
            System.out.println(e);
        }

        String filename = "donations.txt";
        try {
            FileOutputStream fos = new FileOutputStream(filename);
            ObjectOutputStream oos = new ObjectOutputStream(fos);

            oos.writeObject(donors);
            oos.close();
            fos.close();
        } catch (FileNotFoundException e) {
            System.out.println(e);
        } catch (IOException e) {
            System.out.println(e);
        }

        try {
            FileInputStream fis = new FileInputStream(filename);
            ObjectInputStream ois = new ObjectInputStream(fis);

            Donor[] savedDonors = (Donor[]) ois.readObject();

            fis.close();
            ois.close();

            System.out.println("Donors with A+ve and Last date of Donation > 6mths: ");
            for (Donor d : savedDonors) {
                if (getMonths(d.dold, new Date()) > 6 && d.bgroup.equals("A+ve"))
                    d.display();
            }
        } catch (FileNotFoundException e) {
            System.out.println(e);
        } catch (IOException e) {
            System.out.println(e);
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }

    }
}