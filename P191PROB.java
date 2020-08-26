import java.util.*;
import java.lang.*;
 
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scanner = new Scanner(System.in);
        int a, b, d = 0;
        a = scanner.nextInt();
        b = scanner.nextInt();
        int[] x = new int[a];
        for (int i = 0; i < a; i++)
            x[i] = scanner.nextInt();
        for (int i = 0; i < a - 1; i++)
        {
            for (int j = i + 1; j < a; j++)
                if (x[i] + x[j] == b) d++;
        }
        System.out.println(d);
	}
} 
