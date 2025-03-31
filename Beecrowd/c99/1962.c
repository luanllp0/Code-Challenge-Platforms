#include <stdio.h>

int main(){
    int i, n, qtdAnos;
    i =0;

    scanf("%d",&n);

    for (i; i < n; i++){
        scanf("%d",&qtdAnos);

        if (qtdAnos>=2015){
            printf("%d A.C.\n", (2015-(qtdAnos+1))*-1);
        }else{
            printf("%d D.C.\n", 2015-qtdAnos);
        }
    }
}