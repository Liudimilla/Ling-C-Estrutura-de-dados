/*Esfera
Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de
 seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.
Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++), a
ssumem que o resultado da divisão entre dois inteiros é outro inteiro.
Entrada
O arquivo de entrada contém um valor inteiro, correspondente ao raio da esfera.
Saída
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float R ,res , pi; 
    
   pi = 3.14159;
     
     
     scanf("%f",&R);
     
     res =(4/0.3)* pi *(R*R*R);
     
     printf(" VOLUME = %.3f\n", res );
     
      system("pause");
}
    
