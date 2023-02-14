/*Aula do dia 14/02*/


#include <stdio.h>
double calcular(char menu, double x, double y);

double calcular (char menu, double x, double y){
    double resultado;
    
    switch (menu){
    
        case '0':
        printf("Saindo...");
        break;
        
        case '+':
        resultado = x + y;
        return resultado;
        break;
        
        case '-':
        resultado = x - y;
        return resultado;
        break;
        
        case '*':
        resultado = x * y;
        return resultado;
        break;
        
        case '/':
        resultado = x / y;
        return resultado;
        break;
    
    }
       
}



// Calculadora Mal feita testes...

int main()
{
    double x;
    double y;
    char menu;
    double resultado;
    
    printf ("Calculadora Mal feita, por favor escolha a opção:\n");
    printf("==================================\n");
    printf ("0 para desligar\n+ para soma\n- para subtração\n* para multiplicação\n/ para divisão\n");
    printf("==================================\n");
    scanf("%c", &menu);
    if(menu != '+' && menu != '-' && menu != '*' && menu != '/' && menu != 0){
        printf("Seu idiota escolha entre um do menu, vc é burro");
        return 0;
    }
    else{
    printf("Diga o primeiro valor: ");
    scanf("%lf", &x);
    printf("Diga o segundo valor: ");
    scanf("%lf", &y);
    
    resultado = calcular(menu,x,y);
    printf("O resultado da sua operação é: ");
    printf("%.2lf", resultado);
    }
    return 0;
}
