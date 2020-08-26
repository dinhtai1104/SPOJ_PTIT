import java.util.*;
import java.lang.*;
 
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scanner = new Scanner(System.in);
        long n, s, d = 0;
        n = scanner.nextLong();
        s = scanner.nextLong();
        long[] a = new long[(int) n];
        for (long i = 0; i < n; i++)
            a[(int) i] = scanner.nextLong();
        Arrays.sort(a);
       // if (s )
        for (long i = n - 1; i >= 0; i--){
            if (s > a[(int) i]){
                d += s / a[(int) i];
                s %= a[(int) i];
            }
        }
        if (s > 0) System.out.println(-1);
        else
            System.out.println(d);
	}
} 
