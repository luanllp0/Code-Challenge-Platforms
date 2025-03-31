#include <stdio.h>

int main(){
    int primeiro, vet[10], i, j;
    scanf("%d", &primeiro);
    vet[0] = primeiro;
    i = 1;
    j = 0;
    for (1; i<10; i++){
        vet[i] = vet[i-1]*2;
    }
    for(j; j<10; j++){
        printf("N[%d] = %d\n",j,vet[j]);
    }
    return 0;
}