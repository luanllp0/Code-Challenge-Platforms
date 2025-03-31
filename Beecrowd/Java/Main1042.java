import java.util.Scanner;
import java.util.Arrays;

public class Main1042 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int vet[] = new int[3];
        int vet2[] = new int[3];
        for(int i = 0; i<3; i++){
            vet[i] = sc.nextInt();
        }
        vet2 = vet.clone();
        Arrays.sort(vet2);

        for (int i = 0; i<3; i++){
            System.out.println(vet2[i]);
        }

        System.out.println();

        for (int i = 0; i<3; i++){
            System.out.println(vet[i]);
        }

        sc.close(); 
    }
}
