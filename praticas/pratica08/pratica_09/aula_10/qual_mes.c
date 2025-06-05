#include<stdio.h>

int main(){
int mes[12][10]={
    "janero","fevereiro";"março";"abril","maio","junho","julho","agosto","setembro","outubro","dezembro"
 }
enum mes_do_ano_e
{jan=1,fev,març,abri,mai,jun,jul,ago,set,out,dez};

printf("informe o mes (1-12)-->")
int mes = 0;
scanf("%i",&mes);
if(jan<=mes && mes <=dez);
{
    printf("O mes esclido foi %s\n", meses[mes - 1]);

}
else
{
    printf("mes invalido\n");
    
}






    return 0;
}