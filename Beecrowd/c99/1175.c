#include <stdio.h>

int main(){
    int vetA[20], vetB[20], j, i, k, l;
    l = 19;
    j = 0;
    k = 0;
    i = 0;
    for (i; i<20; i++){
        scanf("%d",&vetA[i]);
    }

    for (k; k<20; k++){
        vetB[l] = vetA[k];
        l--;
    }

    for(j; j<20; j++){
        printf("N[%d] = %d\n",j,vetB[j]);
    }
    return 0;
}