#include <stdio.h>

int main()
{
    int opcao = 0;
    printf("MENU PRINCIPAL\n");
    printf("consultar saldo\n");
    printf("fazer recarga\n");
    printf("ver recados\n");
    printf("ultimas ligacoes\n");
    printf("sair\n");
    printf("escolha uma opicao -->"); 
    scanf ("%i", &opcao);

    if (opcao == 1)
    {
        printf("seu saldo eh 10.00\n");
    }
    else if (opcao == 2)
    {
        printf("digite 1 o/10.00,2 o/ 20.00 ou 5 o/5f");
    }
    else if (opcao == 3)
    {
        printf("voce nao tem recado\n");
    }
    else if (opcao == 4)
    {
        printf("voce ligou para  00000-00000");
    }
}