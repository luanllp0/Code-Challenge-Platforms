#include <stdio.h>

int main(){
    int valor, backup;

    scanf("%d",&valor);
    backup = valor;

    int cem = valor / 100;
    valor = valor % 100;
    int cinquenta = valor / 50;
    valor = valor % 50;
    int vinte = valor / 20;
    valor = valor % 20;
    int dez = valor / 10;
    valor = valor % 10;
    int cinco = valor / 5;
    valor = valor % 5;
    int dois = valor / 2;
    valor = valor % 2;
    int um = valor;

    printf("%d\n",backup);
    printf("%d nota(s) de R$ 100,00\n",cem);
    printf("%d nota(s) de R$ 50,00\n",cinquenta);
    printf("%d nota(s) de R$ 20,00\n",vinte);
    printf("%d nota(s) de R$ 10,00\n",dez);
    printf("%d nota(s) de R$ 5,00\n",cinco);
    printf("%d nota(s) de R$ 2,00\n",dois);
    printf("%d nota(s) de R$ 1,00\n",um);

    return 0;
}   