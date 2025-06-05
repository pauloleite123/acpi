#include<stdio.h>

int main(){
int numeros[10];
for(int i=0; i<10; i++){
    int intero;
    scanf("%i",&numeros[i]);
}
int numero;
int achou = -1;
for(int i = 1;i<10; i++){
    if(numeros[i] == numero){
        achou = i;
    }
}
printf("O numero nao foi encontrado");
printf("O numero foi encontrado na posicao i");





    return 0;
}

