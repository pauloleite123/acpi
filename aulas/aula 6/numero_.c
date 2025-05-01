#include <stdio.h>

int main() {

    printf("entre com um numero inteiro");
    scanf("%i", &numero);
int numero_eh_divisivel_por_2 = numero % 2 ==0;
if(numero_eh_divisivel_por_2) {
    printf("o numero %i eh par\n", numero);
}else{
    printf("o numero %i eh impar\n",numero)
}
    return 0
}