import java.util.Locale;
import java.util.Scanner;

public class Main1075 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

    int n = sc.nextInt();
    for (int i=1; i<=10000; i++){
        if (i%n == 2){
            System.out.println(+i);
        }
    }

        sc.close(); 
    }
}