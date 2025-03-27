#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
 //char -->"A",'\n',100
 //int -->
 //float -->
 //double -->
 //void -->   
 printf("O tipo 'char' ocupa %i byte(s)\n",sizeof(char) );
 printf("O tipo 'int' ocupa %i byte(s)\n",sizeof(int));
 printf("O tipo 'double' ocupa %i byte(s)\n",sizeof(double));
 printf("O tipo 'void' ocupa %i byte(s)\n",sizeof(void));
 printf("O tipo 'char' aceita valor de  %i a %i\n",CHAR_MIN, CHAR_MAX);
 printf("O tipo 'int' aceita valor de  %i a %i\n",CHAR_MIN, CHAR_MAX);
 printf("O tipo 'float' aceita valor de  %E a %E\n",CHAR_MIN, CHAR_MAX);



    return 0;



}