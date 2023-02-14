/*    Aula 01 - 07/02/2023     */
//Incluir Blibiotecas

#include <stdio.h>
#include <stdlib.h>

int main()
{   // int, float, char, double
    // operações básicas +, -, *, /, %(resto)
    // operadores relacionais >, <, >=, <=, ==, != 
    // operadores lógicos && (e), ||(ou), !(diferente)
    // operadores de incremento ++, --
    // operações simplificadas +=, -=, *=, /=, %=
    
    /* if(validação){
        }
        else{
        }
    */


// Saber se o numero é par ou impar
    int num;
    
    printf("Digite um valor:");
    scanf("%d", &num);
    
    if(num%2 == 0){
        printf("O numero é par");
    }
    else{
        printf("O numero é impar");
    }
    
    
/*  int x, y, total;
    int menu;
    printf ("Calculadora Mal feita, por favor escolha a opção:\n");
    printf ("---Digite 0 para desligar---\n---Digite 1 para soma---\n---Digite 2 para multiplicação---\n---Digite 3 para divisão---\n");
    scanf("%d", &menu);
    switch (menu)
    {
    case 0: 
    break;
    
    case 1:
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    total = x + y;
    printf("O valor da soma é: %d", total);
    break;
    
    case 2:
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    total = x * y;
    printf("O valor da multiplicação é: %d", total);
    break;
    
    case 3:
     printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    total = x / y;
    printf("O valor da divisão é: %d", total);
    break;
    
    default:
    printf("escolhe um numero do menu capeta");
    break;
}*/
    return 0;
}
