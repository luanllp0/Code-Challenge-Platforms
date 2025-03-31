#include <stdio.h>
int main(){
    int x, y, soma, backup;
    scanf("%d",&x);
    scanf("%d",&y);
    soma = 0;
    if (x>y){
        if (y%2 == 0){
            y = y+1;
            backup = 0;
        }else if (y%2 != 0){
            backup = y;
        }
        for (y; y<x; y = y+2){
            soma = soma + y;
        }
        soma = soma - backup;
    }else if (x<y){
         if (x%2 == 0){
            x = +1;
            backup = 0;
        }else if (x%2 != 0){
            backup = x;
        }
        for (x; x<y; x=x+2){
            soma = soma +x;
        }
        soma = soma - backup;
    }else if (x==y){
        soma = 0;
    }
    printf("%d\n",soma);
}