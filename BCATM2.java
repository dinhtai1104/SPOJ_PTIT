import java.util.*;
import java.lang.*;
 
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scanner = new Scanner(System.in);
        int n, s, d = 0;
        n = scanner.nextInt();
        s = scanner.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++)
            a[i] = scanner.nextInt();
        Arrays.sort(a);
        for (int i = n - 1; i >= 0; i--){
            if (s > a[i]){
                d += s / a[i];
                s %= a[i];
            }
        }
        System.out.println(d);
	}
} 
