#include <stdio.h>
#include <string.h>
int main()
{
    char frase[31];
    printf("Digite uma frase!");
    scanf("%i", &frase);
    char letra;
    printf("digite uma sequencia de letras!!");
    scanf("%i", &letra);
    int quantidade = 0;
    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == letra)
            quantidade++;
    }
    printf("A frase nao contem a letra!");

    return 0;
}