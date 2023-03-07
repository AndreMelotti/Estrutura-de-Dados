/*
Aula 07/03

Arrays e Vetores

*/
#include <stdio.h>

int main()
{
   int array[5];
   int notaMaior;
   
   for (int i = 0; i<5; i++){
            
            printf("Digite um valor inteiro: ");
            scanf("%i", &array[i]);
            
       if (array[i] > notaMaior){
           notaMaior = array[i];
        }
        else{
            notaMaior = array[0];
        }
     
    }
   
   printf("O maior valor que enviou foi: %i", notaMaior);
    return 0;
}
