import java.time.format.*;
import java.time.LocalDateTime;

public class PractiseFive {
    public static void main(String[] args){
        DateTimeFormatter dtf = DateTimeFormatter.ofPattern("dd/MM/yyyy HH:mm") ;
        LocalDateTime now = LocalDateTime.now() ;
        System.out.println(dtf.format(now)) ;
    }
}