import java.util.Scanner;

public class Main1049 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        String filo = sc.next();
        String classe = sc.next();
        String alimentacao = sc.next();

        switch (filo) {
            case "vertebrado":    
                switch (classe) {
                    case "ave":
                        switch (alimentacao) {
                            case "carnivoro":
                                System.out.println("aguia");
                                break;
                            
                            case "onivoro":
                                System.out.println("pomba");
                                break;

                            default:
                                break;
                        }
                        break;
                    case "mamifero":
                        switch (alimentacao) {
                            case "onivoro":
                                System.out.println("homem");                     
                                break;
                            
                            case "herbivoro":
                                System.out.println("vaca");
                                break;

                            default:
                                break;
                        }
                        break;
                
                    default:
                        break;
                }
                break;
        
            case "invertebrado":
                switch (classe) {
                    case "inseto":
                        switch (alimentacao) {
                            case "hematofago":
                                System.out.println("pulga");
                                break;
                            
                            case "herbivoro":
                                System.out.println("lagarta");
                                break;
                            default:
                                break;
                        }
                        break;
                        case "anelideo":
                            switch (alimentacao) {
                                case "hematofago":
                                    System.out.println("sanguessuga");
                                    break;

                                case "onivoro":
                                    System.out.println("minhoca");
                                    break;
                                default:
                                    break;
                            }
                            break;
                
                    default:
                        break;
                }
                break;
        
            default:
                break;
        }


        sc.close(); 
    }
}