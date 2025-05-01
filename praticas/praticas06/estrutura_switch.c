#include <stdio.h>

int main()
{
    int nota;
    printf("insira sua nota:\n");
    scanf("%i", &nota);
    switch (nota)
    {
    case 1:
        printf("Voce ganhou '*'.\n");
    case 2:
        printf("voce ganhou '**'\n");
    case 3:
        printf("voce ganhou '***'\n");
    case 4:
        printf("voce ganhou '****!'\n");
    case 5:
        printf("voce ganhou '*****!'\n");
    default:
        printf("Nota invalida tente novamente.\n");
    }

    return 0;
}