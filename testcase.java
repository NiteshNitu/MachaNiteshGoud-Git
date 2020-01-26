import java.util.*;

public class testcase {

    public static void main(String[] args) {
        Random rand=new Random();
        int t = rand.nextInt(5) + 1;
        System.out.printf("%d\n", t);
        while(t > 0) {
            int n = rand.nextInt(1000)+1, temp = n-1;
            int k = rand.nextInt(temp)+1;

            System.out.printf("%d %d\n", n, k);
            for(int i=0;i<n;i++)
            {
                int ai = rand.nextInt(999) + 1;
                System.out.printf("%d ", ai);
                
            }
            System.out.println("");
            t--;
        }
    }
}