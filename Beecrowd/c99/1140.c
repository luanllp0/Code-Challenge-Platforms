#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char frase[1050];

    while (fgets(frase, sizeof(frase), stdin)) {
        if (frase[0] == '*'){
            break;
            }

        char base = tolower(frase[0]); 
        int y = 1; 

        for (int i = 1; frase[i] != '\0'; i++) {
            if (frase[i] == ' ' && isalpha(frase[i + 1])) {
                if (tolower(frase[i + 1]) != base) {
                    y = 0;  
                    break;
                }
            }
        }

        if (y)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}