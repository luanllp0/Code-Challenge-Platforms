#include <stdio.h>

int main(){
    int n, tipo, alcool, gasolina, diesel;
    n=0;
    alcool = 0;
    gasolina = 0;
    diesel = 0;
    while (n < 1){
        scanf("%d", &tipo);
        if (tipo > 4){
        continue;

    }else if(tipo == 1){
        alcool = alcool + 1;
        continue;

    }else if (tipo == 2){
        gasolina = gasolina + 1;
        continue;

    }else if(tipo == 3){
        diesel = diesel + 1;
        continue;
    }else if(tipo == 4){
        printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcool, gasolina, diesel);
        n = 1;
    }
    
    }
    



    return 0;
}