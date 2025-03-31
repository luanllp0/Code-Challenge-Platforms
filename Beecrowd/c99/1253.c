#include <stdio.h>

int main(){
    int contador, i;

    scanf("%d",&contador);

    for (i; i<contador; i++){
        char str[50];
        char strB[50];
        int deslocamento, j, x, y, a;

        scanf("%s",str);
        scanf("%d", &deslocamento);

        j = 0;
        while (j < 50)
        {
            if (str[j] == '\n' || str[j] == '\0'){
            strB[j] = '\0';
            j++;
        }else if (str[j] - deslocamento < 65){
                x = str[j] - deslocamento;
                y = 65 - x;
                strB[j] = '[' - y;
                j++;
            }else{
                strB[j] = str[j] - deslocamento; 
                j++;
            }
        }
        


        printf("%s\n",strB);
        
    } 
    return 0;
}