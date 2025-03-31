import java.util.Locale;
import java.util.Scanner;

public class Main1175 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

    int temp;
    int[] n = new int[20];
    for (int i=0; i<20; i++){
        n[i] = sc.nextInt();
    }
    for (int i=0; i<10; i++){
        temp = n[i];
        n[i] = n[19-i];
        n[19-i] = temp;
    }

    for (int i=0; i<20; i++){
        System.out.printf("N[%d] = %d%n", i, n[i]);
    }

        sc.close(); 
    }
}
