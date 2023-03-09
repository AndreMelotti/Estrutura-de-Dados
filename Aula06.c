/*
Aula do dia 09/03

*/
#include <stdio.h>

int main()
{
// Fazer o maior ir pro final e o menor ir pro começo trocando de lugares

    int vet[10];
    int maior;
    int menor;
    int indexMaior;
    int indexMenor;
    int trocandoMa;
    int trocandoMe;
    
    
    printf("Digite um numero da lista:\n");
    for (int i = 0; i < 10;i ++){
        printf("%i° Numero: ", i + 1);
        scanf ("%i", &vet[i]);
        
        if (maior < vet[i]){
            maior = vet[i];
            indexMaior = i;
        }else if(i == 0){
            maior = vet[0];
            indexMaior = i;
        }
        if (menor > vet[i]){
            menor = vet[i];
            indexMenor = i;
        }else if(i == 0){
            menor = vet[0];
            indexMenor = i;
        }
     
    }
     trocandoMa = vet[9];
     vet[9] = maior;
     vet[indexMaior] = trocandoMa;
     
     trocandoMe = vet[0];
     vet[0] = menor;
     vet[indexMenor] = trocandoMe;
     
     printf("Vetores mudados:\n");
     for (int i = 0; i < 10; i++){
        printf("%i\n", vet[i]);
     }
     
    
   
    








/* // Codigo para fazer a media dos valores

    int vet[10];
    int num;
    double mediaFinal;
    double media;
    int contador = 0;
    
    printf("Digite um numero da lista:\n");
    for (int i = 0; i < 10;i ++){
        printf("%i° Numero: ", i + 1);
        scanf ("%i", &vet[i]);
        
        contador = contador + 1;
        media = media + vet[i];
    }
    
    mediaFinal = media/contador;
    
    printf("A media final: %.2f", mediaFinal);
*/


/*   //Codigo para encontrar numeros pares

    int vet[10];
    int num;
    int contador = 0;
    
    for (int i = 0; i < 10;i ++){
        printf("Digite um numero da lista: ");
        scanf ("%i", &vet[i]);
        
        if(vet[i] % 2 == 0){
           contador = contador + 1;
        }
      
    }
    
    printf("O numero de numeros pares é: %i", contador);
*/
        

    return 0;
}
