import java.util.Locale;
import java.util.Scanner;

public class Main1065 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        int[] numeros = new int[5];
        int contador = 0;
    
        for(int i= 0; i<5; i++){
            numeros[i] = sc.nextInt();
            if (numeros[i] % 2 == 0){
                contador++;
            }
        }

        System.out.printf("%d valores pares%n", contador);


        sc.close(); 
    }
}
