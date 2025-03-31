#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX_FRASE 1000
#define MAX_PALAVRAS 100

typedef struct {
    char palavra[51];
    int ordem;
} Palavra;

int comparar_palavras(const void *a, const void *b) {
    Palavra *p1 = (Palavra *)a;
    Palavra *p2 = (Palavra *)b;
    
    int tamanho1 = strlen(p1->palavra);
    int tamanho2 = strlen(p2->palavra);
    
    if (tamanho1 == tamanho2) {
        return p1->ordem - p2->ordem;
    }
    
    return tamanho2 - tamanho1;
}

int main() {
    int n;
    char frase[TAM_MAX_FRASE];
    Palavra palavras[MAX_PALAVRAS];

    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        fgets(frase, TAM_MAX_FRASE, stdin);
        frase[strcspn(frase, "\n")] = 0;

        int num_palavras = 0;
        char *palavra = strtok(frase, " ");
        while (palavra != NULL) {
            strcpy(palavras[num_palavras].palavra, palavra);
            palavras[num_palavras].ordem = num_palavras;
            num_palavras++;
            palavra = strtok(NULL, " ");
        }

        qsort(palavras, num_palavras, sizeof(Palavra), comparar_palavras);

        for (int j = 0; j < num_palavras; j++) {
            printf("%s", palavras[j].palavra);
            if (j < num_palavras - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}