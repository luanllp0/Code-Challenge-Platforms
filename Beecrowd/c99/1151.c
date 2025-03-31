#include <stdio.h>

int main(){
    int n, i, j, vet[46];
    i = 2;
    j = 0;
    vet[0] = 0;
    vet[1] = 1;
    scanf("%d",&n);
    for (i; i<n; i++){
        vet[i] = vet[i-1] + vet[i-2];
    }
    for (j; j<n; j++){
        if (j==(n-1)){
            printf("%d",vet[j]);
        }else{
            printf("%d ",vet[j]);
        }
        
    }
    printf("\n");
}