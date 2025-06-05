#include <stdio.h>
#include <string.h>
int main()
{
    char nomes[10][101];
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &nomes);
    }

    char sobrenome[11];
    scanf("%i", &sobrenome);

    int achou = 0;

    for (int i = 0; i < 10; i++)
    {
        if (strstr(nomes[i], sobrenome))
        {
            printf("%s\n", nomes[i]);
            achou = 1;
        }
    }

    if (achou == 0)
    {
        printf("nenhum nome foi encontrado!!");
    }

    return 0;
}