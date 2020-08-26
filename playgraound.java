public class playgraound {

    int revNumber(int number){
        int remainder = 0, revNum = 0;

        while(number != 0){
            remainder = number%10;
            revNum = revNum*10 + remainder;
            number -= remainder;
            number /=  10; 
        }

        return revNum;
    }
    public static void main(String[] args){
        playgraound pg = new playgraound();
        int number = pg.revNumber(968);
        System.out.println(number);
    }
}