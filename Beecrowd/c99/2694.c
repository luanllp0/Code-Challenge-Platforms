#include <stdio.h>
int main(){
    char str[14];
    int i, contador, somaFinal;
    i = 0;
    scanf("%d",&contador);
    for (i; i<contador; i++){
        somaFinal = 0;
        scanf("%s",str);
        
        int n1 = str[2] - '0';
        n1 = n1*10;
        int n2 = str[3] - '0';

        int n3 = str[5] - '0';
        n3 = n3*100;
        int n4 = str[6] - '0';
        n4 = n4*10;
        int n5 = str[7] - '0';

        int n6 = str[11] - '0';
        n6 = n6*10;
        int n7 = str[12] - '0';

        somaFinal = n1+n2+n3+n4+n5+n6+n7;

        printf("%d\n",somaFinal);
    }
}