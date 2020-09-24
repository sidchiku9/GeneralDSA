package GeneralDSA;

public class mainPackage {
    public void printMessage() {
        System.out.println("Hello from the main package function");
    }

    public static void main(String[] args) {
        mainPackage m = new mainPackage();
        m.printMessage();
    }
}