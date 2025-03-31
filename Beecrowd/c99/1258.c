#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Polo
{
    char estudante[100], logo[10], tamanho[10];
};

int comparar(const void *x, const void *y)
{
    struct Polo *poloA = (struct Polo *)x;
    struct Polo *poloB = (struct Polo *)y;

    int corComparacao = strcmp(poloA->logo, poloB->logo);
    if (corComparacao == 0)
    {
        int tamanhoComparacao = strcmp(poloA->tamanho, poloB->tamanho);
        if (tamanhoComparacao == 0)
        {
            return strcmp(poloA->estudante, poloB->estudante);
        }
        return -tamanhoComparacao;
    }
    return corComparacao;
}

int main()
{
    int qtd, primeiroTeste = 1;
    struct Polo polos[60];

    while (scanf("%d\n", &qtd))
    {
        if (!qtd)
            break;

        if (primeiroTeste)
            primeiroTeste = 0;
        else
            printf("\n");

      for (int i = 0; i < qtd; ++i)
        {            
            scanf("%[^\n]\n", polos[i].estudante); 
            scanf("%s %s\n", polos[i].logo, polos[i].tamanho);
        }

        qsort(polos, qtd, sizeof(struct Polo), comparar);

        for (int i = 0; i < qtd; ++i)
        {
            printf("%s %s %s\n", polos[i].logo, polos[i].tamanho, polos[i].estudante);
        }
    }

    return 0;
}