#include<stdio.h>

int main(){
char frase[30] = "Eu programo em C";
for(int i =0; i<30; i++){
    printf("%i",frase[i]);

}
frase[5]= '\0';
printf("\n");
printf("%i\n",frase);
 
printf("Entre com uma frase\n");
scanf("%[^\n/s", frase);
while(getchar()!= \'\n');

char cesar[6] [5];
int i=0;
for(int i=0;j<5; j++){
    for(int i=0 ; j<5 , j++){
        cesar[i][j] = frase[k]; k++;
    }
}
for(int j = 0;j<5 ; j++){


    for(int i=0;i<0;i++){
printf("%c", cesar [i][j]);
    }
    }    

printf("\n");
    



    return 0;
}