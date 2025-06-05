#include<stdio.h>

#define segunda 1;
#define terça 2;
#define quarta 3;
#define quinta 4;
#define sexta 5;
#define sabado 6;
#define domingo 7;

int main(){
enum dias_da_semana_e
{
    dom =1,
    seg,
    terç,
    quart,
    quint,
    sex,
    sab,
}
printf("Informe um dia da semana de (1 a 7)-->");
int dia_da_semana =0;
scanf("%i",&dia_da_semana);
switch (dia_da_semana)
{
    case seg:
    case terç:
    case quart:
    case quint:
    case sex:
printf("Eh um dia util\n");
break;
case sab:
case dom:
printf("nao eh um dia util\n");
}
    


    
}






}