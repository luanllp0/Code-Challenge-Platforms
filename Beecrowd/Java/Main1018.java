import java.util.Scanner;

public class Main1018 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int valor = sc.nextInt();
        int cem, cinquenta, vinte, dez, cinco, dois, um;
        int base = valor;
        cem = valor / 100;
        valor = valor %100;
        cinquenta = valor / 50;
        valor = valor%50;
        vinte = valor/20;
        valor = valor%20;
        dez = valor/10;
        valor = valor%10;
        cinco = valor/5;
        valor = valor%5;
        dois = valor/2;
        valor = valor%2;
        um = valor/1;
        valor = valor%1;

        System.out.printf("%d%n%d nota(s) de R$ 100,00%n%d nota(s) de R$ 50,00%n%d nota(s) de R$ 20,00%n%d nota(s) de R$ 10,00%n%d nota(s) de R$ 5,00%n%d nota(s) de R$ 2,00%n%d nota(s) de R$ 1,00%n", base, cem, cinquenta, vinte, dez, cinco, dois, um);
    
        sc.close(); 
    }
}
