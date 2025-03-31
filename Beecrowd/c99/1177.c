#include <stdio.h>

int main(){
    int vet[1000], i, j, k, t;

    scanf("%d",&t);

    i = 0;
    j = 0;
    k = 0;
    for (i; i<1000; i++){
        vet[i] = j;
        j++;

        if (j == t){
            j =0;
        }
    }

    for (k; k<1000; k++){
        printf("N[%d] = %d\n",k,vet[k]);
    }

    return 0;
}