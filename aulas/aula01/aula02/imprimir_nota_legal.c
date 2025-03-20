#include<stdio.h>
int main(){
    printf("-----------------------------------------------------------\n");
    printf("              nota legal\n");
    printf("-----------------------------------------------------------\n");
    printf("item               Qtd       Prc     Valor\n");
    printf("%-18s %03i %9.2f %8.2f\n","caneta azul", 2, 2.00, 4.00);
   printf("%-18s %03i %9.2f %8.2f\n","borracha", 1, 5.00, 5.00);
   printf("%-18s %03i %9.2f %8.2f\n","resma de papel", 1, 10.00, 10.00);
    printf("-----------------------------------------------------------\n");
    printf("                  TOTAL: RS %6.2f\n",19.0);
    return 0;
}