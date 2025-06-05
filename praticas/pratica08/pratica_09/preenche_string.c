#include <stdio.h>
#include <string.h>

int main()
{
    int string[11];
    memset(string, '\0', sizeof(string));
    char tecla;
    printf("Preencha a strinf")
        scanf("%i",&tecla);
    memset(string, tecla, 10);
    printf("%s\n", string);
    memset(string, '*', 5);
    printf("string");
    string[5] = '\0';
    printf("string");
    for (int i = 0; i < 10; i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}