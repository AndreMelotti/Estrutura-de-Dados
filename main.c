// Aula do dia 16/02

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*typedef struct aluno {      //Como se fosse uma classe, mas como em C não é orientada a objeto,
    int matricula;          // alem de menos completo, não tem muitas funções e aplicações que deveriam ter.
    char nome[30];
    float nota;
}aluno;
*/

typedef struct forma{
    int tipo;
    float area;
    float perimetro;
}forma;

float calculaForma (int tipo){
    float resultado;
    int menu;
    float b, h, r, B;             //b = base(ou base menor); h = altura; B = Base maior; r = raio;
    
    
    if (tipo == 1){
    switch (menu){
        
        case 1:
        // Trinagulo
        printf("Digite o valor da base: ");
        scanf ("%f", &b);
        printf("Digite o valor da altura: ");
        scanf ("%f", &h);
        return resultado = (b * h)/2;
        break;
        
        case 2:
        // Quadrado
        printf("Digite o valor da base: ");
        scanf ("%f", &b);
        return resultado = b * b;
        break;
        
        case 3:
        // Retangulo
        printf("Digite o valor da base: ");
        scanf ("%f", &b);
        printf("Digite o valor da altura: ");
        scanf ("%f", &h);
        return resultado = b * h;
        break;
        
        case 4:
        // Circulo
        printf("Digite o valor do raio: ");
        scanf ("%f", &r);
        return resultado = 3,14 * (r * r);
        break;
        
        case 5:
        // Trapezio
        printf("Digite o valor da Base maior: ");
        scanf ("%f", &B);
        printf("Digite o valor da base menor: ");
        scanf ("%f", &b);
        printf("Digite o valor da altura: ");
        scanf ("%f", &h);
        return resultado = ((B + b) * h)/2;
        break;

}
}
    
    if(tipo == 2){
        printf("%d", x.tipo);//area
    switch (menu){
        
        case 1:
        // Trinagulo
        printf("Digite o valor da base: ");
        scanf ("%f", &b);
        printf("Digite o valor da altura: ");
        scanf ("%f", &h);
        return resultado = (b * h)/2;
        break;
        
        case 2:
        // Quadrado
        printf("Digite o valor da base: ");
        scanf ("%f", &b);
        return resultado = b * b;
        break;
        
        case 3:
        // Retangulo
        printf("Digite o valor da base: ");
        scanf ("%f", &b);
        printf("Digite o valor da altura: ");
        scanf ("%f", &h);
        return resultado = b * h;
        break;
        
        case 4:
        // Circulo
        printf("Digite o valor do raio: ");
        scanf ("%f", &r);
        return resultado = 3,14 * (r * r);
        break;
        
        case 5:
        // Trapezio
        printf("Digite o valor da Base maior: ");
        scanf ("%f", &B);
        printf("Digite o valor da base menor: ");
        scanf ("%f", &b);
        printf("Digite o valor da altura: ");
        scanf ("%f", &h);
        return resultado = ((B + b) * h)/2;
        break;

}
}
    
    return resultado;
}




int main()
{
  
  struct forma x;
  int tipo;
  
    printf ("Escolha se prefere calcular area ou perimetro: ");
    scanf ("%d", &tipo);
    

  
  
  if(tipo == 1 ){
    printf ("Escolha a Forma que deseja calcular o Perimetro:\n=============\n1-Triangulo\n2-Quadrado\n3-Retangulo\n4-Circulo\n5-Trapésio\n=============\n");
    scanf ("%d", &x.tipo);
    x.perimetro = calculaForma(x.tipo);
    printf ("O valor da Área é: %.2f", x.perimetro);
  }
  
  if(tipo == 2){
    printf ("Escolha a Forma que deseja calcular o Area:\n=============\n1-Triangulo\n2-Quadrado\n3-Retangulo\n4-Circulo\n5-Trapésio\n=============\n");
    scanf ("%d", &x.tipo);
    scanf ("%d")
    x.area = calculaForma(x.tipo);
    printf ("O valor da Área é: %.2f", x.area);
  }
  
  
  
  
  
   /* struct aluno x = {2, "João", 5};
    
    printf("Digite a nota do Aluno %s, de matricula %d: ", x.nome, x.matricula);
    scanf("%f", &x.nota);
    
    printf("\nO aluno %s, de matricula %d, tem nota %.2f", x.nome, x.matricula, x.nota);
    ;
    */
    
    return 0;
}
