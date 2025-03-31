import java.util.Locale;
import java.util.Scanner;

public class Main1117 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        float[] numeros = new float[2];
        numeros[0] = -1;
        numeros[1] = -1;
        int contador = 0;
        float media = 0; 
    
        while(true){
            numeros[contador] = sc.nextFloat();
            if (numeros[1] >= 0 && numeros[1] <= 10){
                break;
            }
            if (numeros[contador] >= 0 && numeros[contador] <= 10){
                contador++;
                continue;
            }else{
                System.out.println("nota invalida");
                continue;
            }
        }

        media = (numeros[0] + numeros[1])/2;

        System.out.printf("media = %.2f%n", media);


        sc.close(); 
    }
}
