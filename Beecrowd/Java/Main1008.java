import java.util.Scanner;

public class Main1008 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int hours = sc.nextInt();
        float perHour = sc.nextFloat();
        float salary = hours * perHour;
        System.out.println("NUMBER = "+number);
        System.out.printf("SALARY = U$ %.2f%n", salary);     
        sc.close(); 
    }
}
