package GeneralDSA.subPack;

public class subPack {
    public void printMessages() {
        System.out.println("Hello from the subpackage function");
    }

    public static void main(String[] args) {
        subPack s = new subPack();
        s.printMessages();
    }
}
