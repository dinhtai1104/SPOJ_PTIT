import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.util.Scanner;
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		String a = new String();
        String b = new String();
        Scanner scanner = new Scanner(System.in);
        a = scanner.next();
        b = scanner.next();
        BigInteger x = new BigInteger(a);
        BigInteger y = new BigInteger(b);
        System.out.println(x.add(y));
        System.out.println(x.subtract(y));
        System.out.println(x.multiply(y));
		
	}
} 
