import java.util.Locale;
import java.util.Scanner;

public class Main1183 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        int cont = 0;
        float soma = 0, media =0;
        float[][] n = new float[12][12];
        char c = sc.next().charAt(0);

        for (int i=0; i<12; i++){
            for (int j=0; j<12; j++){
                n[i][j] = sc.nextFloat();
                if (j>i){
                    cont++;
                    soma += n[i][j];
                }
            }
        }

        if (c == 'S'){
            System.out.printf("%.1f%n", soma);
        }else if (c == 'M'){
            media = soma/cont;
            System.out.printf("%.1f%n", media);
        }

        sc.close(); 
    }
}
