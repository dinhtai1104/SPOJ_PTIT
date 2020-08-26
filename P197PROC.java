import java.util.*;
import java.lang.*;
 
class Main
{
public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        long sMax = -1, stmp = 0, sDuong = 0, sAm = 999999;
        n = scanner.nextInt();
        long[] a = new long[n];
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
            stmp += a[i];
            if (stmp < 0) stmp = 0;
            sMax = Math.max(sMax, stmp);
            if (a[i] > 0) {
                sDuong += a[i];
            }
            else sAm = Math.max(sAm, a[i]);
        }
        if (checkduong(a, n) == false) {
            //System.out.println("YES");
            System.out.println(sDuong);
        }
        else if (checkam(a, n) == false) {
           // System.out.println("NO");
            System.out.println(sAm);
        }
        else System.out.println(sMax);
    }
    static boolean checkduong(long[] a, int n) { // check duong
        for (int i = 0; i < n; i++) {
            if (a[i] < 0) return true;
        }
        return false;
    }
    static boolean checkam(long[] a, int n) { // check am
        for (int i = 0; i < n; i++) {
            if (a[i] > 0) return true;
        }
        return false;
    }
} 
