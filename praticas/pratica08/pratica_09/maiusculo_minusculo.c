#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char maiusculo[11];
    char minusculo[11];
    char string[11];
    printf("digite uma letra miuscula ou minuscula!!");
    scanf("%s", maiusculo);
    scanf("%s", minusculo);
    memset(maiusculo, '\0', sizeof(maiusculo));
    memset(minusculo, '\0', sizeof(minusculo));
    for (int i = 0; i < strlen(string); i++)
    {
        maiusculo[i] = toupper(string[i]);
        minusculo[i] = tolower(string[i]);
    }
    printf("%s\n%s\n", maiusculo, minusculo);

    return 0;
}