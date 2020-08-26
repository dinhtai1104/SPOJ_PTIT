import java.util.*;
import java.lang.*;
 
class Main
{
	public static void main(String[] args) {
        int n;
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        String a = new String();
        String b = new String();
       // String x = new String();
        a = scanner.next();
       // x = scanner.nextLine();
        b = scanner.next();
//        if (a.equals(b) == true) System.out.println(a);
//        else{
            for (int i = 0; i < n; i++){
                if (a.charAt(i) == 'K' && b.charAt(i) == 'B')
                    System.out.print('B');
                else if (a.charAt(i) == 'K' && b.charAt(i) == 'G')
                    System.out.print('K');
                else if (a.charAt(i) == 'B' && b.charAt(i) == 'B')
                    System.out.print('G');
                else if (a.charAt(i) == 'K' && b.charAt(i) == 'K')
                    System.out.print('B');
                else if (a.charAt(i) == 'G' && b.charAt(i) == 'G')
                    System.out.print('K');
                else if (a.charAt(i) == 'B' && b.charAt(i) == 'G')
                    System.out.print('G');
                else if (a.charAt(i) == 'B' && b.charAt(i) == 'K')
                    System.out.print('B');
                else if (a.charAt(i) == 'G' && b.charAt(i) == 'K')
                    System.out.print('K');
                else if (a.charAt(i) == 'G' && b.charAt(i) == 'B')
                    System.out.print('G');
    //       }
        }
    }
} 
