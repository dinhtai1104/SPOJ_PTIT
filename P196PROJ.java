import java.util.*;
import java.lang.*;
 
class Main
{
	public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n, sum1 = 0, sum2 = 0, sumtp1 = 0, sumtp2 = 999999;
        n = scanner.nextInt();
       // int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            int x = scanner.nextInt();
            sum1 += x;
            sum2 += x;
            if (sum1 < 0) sum1 = 0;
            else sumtp1 = Math.max(sumtp1, sum1);
            if (sum2 > 0) sum2 = 0;
            else sumtp2 = Math.min(sumtp2, sum2);
        }
        System.out.println(Math.max(Math.abs(sumtp2), sumtp1));
    }
} 
