#include <stdio.h>

int main()
{
    int opicao = 0;

    while (opicao == 4)
    {
        printf("------------------------------------------\n");
        printf("                     MEU JOGO             \n");
        printf("------------------------------------------\n");
        printf("                                          \n");
        printf("          1- NOVO JOGO                     \n");
        prntf("            2- ver score                     \n");
        printf("            3-sobre                         \n");
        printf("            4- sair                          \n");
        printf(" escolha uma opicao");
        scanf("%i", &opicao);
        while (getchar() != '\n');
            

        switch (opicao)
        {
        case 1:
            printf("Novo jogo\n\n");
            printf("1- jogador A - 1000 pontos\n");
            printf("2- jogador B - 1000 pontos\n");
            printf("3 - jogador C - 1000 pontos\n");
            printf("4 - jogador D - 1000 pontos\n");
            printf("5 - jogador E - 1000 pontos\n");
            break;
        case 2:
            printf(" 1 - jogador A - 1000 pontos\n");
            printf("2- jogador B -1000 pontos\n");
            printf("3- jogador C _ 1000 pontos\n");
            printf("4 - jogador D - 1000 pontos\n");
            printf("5 - jogador E - 1000 pontos\n");
            break;
            case 3:
            printf ("desenvolvimento em C por um programador raiz\n");
            printf("Aperte ENTER para continuar\n");
            break;
            case 4:
            system("claer");
            printf("Ate logo\n");
            break;

        }
    }

    return 0;
}