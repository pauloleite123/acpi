#include<stdio.h>

int main(){

    char tecla ;
    printf("\n digite uma tecla e depois ENTER");
    scanf("%c", &tecla);
    getchar();
    char nome[31];
    printf("digite seu nome");
    printf("digite nome depois ENTER");
    scanf("%s",nome);


    printf("\n a tecla foi --> %c ",tecla);
    printf("\n seu nome e:%s\n", nome);

    return 0;
}
