import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double M = sc.nextDouble();
        double F = sc.nextDouble();
        double pb = M / (M+F);
        double pg = F / (M+F);
        double p3b = 0;
        for (int i = 0; i < (1<<6); i++) {
            int boys = 0;
            double p = 1;
            for (int j = 0; j < 6; j++) {
                boolean isBoy = (i & (1<<j)) != 0;
                p *= isBoy ? pb : pg;
                if (isBoy) boys++;
            }
            if (boys >= 3) {
                p3b += p;
            }
        }
        System.out.println(Math.round(1000 * p3b) / 1000d);
    }
}
