import java.util.Scanner;

public class Main1064 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        float[] numeros = new float[6];
        int contador = 0;
        float soma = 0, media = 0;
        for(int i= 0; i<6; i++){
            numeros[i] = sc.nextFloat();
            if (numeros[i] >0){
                contador++;
                soma += numeros[i];
            }
        }
        media = soma / contador;

        System.out.printf("%d valores positivos%n%.1f%n", contador, media);


        sc.close(); 
    }
}