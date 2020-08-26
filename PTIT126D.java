import java.util.*;
import java.lang.*;
 
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		 Scanner scanner = new Scanner(System.in);
        while(true) {
            int n = scanner.nextInt();
            if (n == 0) break;
            int[] theArray = new int[n];
            for (int i = 0; i < n; i++) theArray[i] = scanner.nextInt();
            int max = theArray[n - 1];
            int[] theAr = new int[max];
            theAr[0] = theArray[0];
            for (int i = 1; i < n; i++) theAr[i] = theArray[i] - theArray[i - 1];
            int x = 1;
            for (int i = 0; i < max; i++) {
                for (int j = 0; j < theAr[i]; j++)
                    System.out.printf("%d ", x);
                x++;
            }
            System.out.println();
        }
    
	}
} 
