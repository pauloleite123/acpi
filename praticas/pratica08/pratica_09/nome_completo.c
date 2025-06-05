#include <stdio.h>
#include <string.h>

int main()
{
    char primeiro_nome[11];
    char ultimo_nome[11];
    scanf("%i" &primeiro_nome);
    scanf("%i",&ultimo_nome);
    char nome[31];
    strcpy(nome, primeiro_nome);
    strcpy(nome, "");
    strcat(nome, ultimo_nome);
    printf("Digite seu nome");

    return 0;
}