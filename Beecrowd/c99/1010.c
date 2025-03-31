#include <stdio.h>

int main(){

   float cod1, num1, preco1, cod2, num2, preco2, total;
   scanf("%f %f %f", &cod1, &num1, &preco1);
   scanf("%f %f %f", &cod2, &num2, &preco2); 
   total = (num1 * preco1) + (num2 * preco2);
   printf("VALOR A PAGAR: R$ %.2f\n", total);    
   return 0;
}   