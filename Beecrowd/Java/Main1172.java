import java.util.Locale;
import java.util.Scanner;

public class Main1172 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

    int[] n = new int[10];
    for (int i=0; i<10; i++){
        n[i] = sc.nextInt();
        if (n[i] <= 0){
            n[i] = 1;
        }
    }
    for (int i=0; i<10; i++){
        System.out.printf("X[%d] = %d%n", i, n[i]);
    }

    
        sc.close(); 
    }
}
