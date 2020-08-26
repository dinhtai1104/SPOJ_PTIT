import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        int string1;
        Scanner scanner = new Scanner(System.in);
        string1 = scanner.nextInt();
        BigInteger bigInteger1 = new BigInteger(String.valueOf(string1));
        BigInteger bigInteger = new BigInteger(String.valueOf(string1));
       // bigInteger.add(bigInteger1);
        //.out.println(bigInteger);
 
        bigInteger = bigInteger.multiply(bigInteger1.add(BigInteger.valueOf(1)));
       // System.out.println(bigInteger);
 
        bigInteger = bigInteger.multiply(bigInteger1.multiply(BigInteger.valueOf(2)).add(BigInteger.valueOf(1)));
        //System.out.println(bigInteger);
        //bigInteger =  bigInteger.add(BigInteger.valueOf(1));
        //System.out.println(bigInteger);
 
        bigInteger =  bigInteger.divide(BigInteger.valueOf(6));
        System.out.println(bigInteger);
 
 
    }
}
 
