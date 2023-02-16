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

float calculaForma (int tipo, int menu){
    float resultado;
    float b, h, r, B;           //b = base(ou base menor); h = altura; B = Base maior; r = raio;
    float l1, l2, l3, l4;       //l1 = lado 1; l2 = lado 2; l3 = lado 3; l4 = lado 4;
    
    if (menu == 1){             // calcula a Área
    switch (tipo){
        
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
    
    if(menu == 2){              // Calcula o Perimetro
    switch (tipo){
        
        case 1:
        // Trinagulo
        printf("Digite os valores dos 3 lados:\n");
        scanf ("%f\n", &l1);
        scanf ("%f\n", &l2);
        scanf ("%f", &l3);
        return resultado = l1 + l2 + l3;
        break;
        
        case 2:
        // Quadrado
        printf("Digite o valor do lado: ");
        scanf ("%f", &b);
        return resultado = b * 4;
        break;
        
        case 3:
        // Retangulo
        printf("Digite os valores dos 4 lados:\n");
        scanf ("%f\n", &l1);
        scanf ("%f\n", &l2);
        scanf ("%f\n", &l3);
        scanf ("%f", &l4);
        return resultado = l1 + l2 + l3 + l4;
        break;
        
        case 4:
        // Circulo
        printf("Digite o valor do raio:\n");
        scanf ("%f", &r);
        return resultado = r * 6,28 ;
        break;
        
        case 5:
        // Trapezio
        printf("Digite os valores dos 4 lados:\n");
        scanf ("%f\n", &l1);
        scanf ("%f\n", &l2);
        scanf ("%f\n", &l3);
        scanf ("%f", &l4);
        return resultado = l1 + l2 + l3 + l4;
        break;
}
}
    
    return resultado;
}




int main()
{
  
  struct forma x;
  int menu;
  float resultado;
  
    printf ("Escolha a Forma que deseja:\n=============\n1-Triangulo\n2-Quadrado\n3-Retangulo\n4-Circulo\n5-Trapésio\n=============\n");
    scanf ("%d", &x.tipo);
 
    printf ("Escolha o que deseja calcular\n=============\n1-Área\n2-perimetro:\n=============\n");
    scanf ("%d", &menu);
    
    resultado = calculaForma(x.tipo, menu);
  
  if(menu == 1 ){
    x.area = resultado;
    printf ("O valor da Área é: %.2f", x.area);
  }
  
  if(menu == 2){
    x.perimetro = resultado;
    printf ("O valor da Área é: %.2f", x.perimetro);
  }
  
  
  
   /* struct aluno x = {2, "João", 5};
    
    printf("Digite a nota do Aluno %s, de matricula %d: ", x.nome, x.matricula);
    scanf("%f", &x.nota);
    
    printf("\nO aluno %s, de matricula %d, tem nota %.2f", x.nome, x.matricula, x.nota);
    ;
    */
    
    return 0;
}
