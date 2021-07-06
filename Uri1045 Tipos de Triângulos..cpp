/*Uri1045 Tipos de Tri�ngulos.
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, 
determine o tipo de tri�ngulo que estes tr�s lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
se A = B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os tr�s lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
EEntrada
entrada contem tr�s valores de ponto flutuante de dupla precis�o A (0 < A) , B (0 < B) e C (0 < C).
Sa�da
Imprima todas as classifica��es do tri�ngulo especificado na entrada.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
 float A, B, C, Y;
 scanf("%f %f %f", &A, &B, &C);
if (A < B){ Y = A; A = B; B = Y; }
 if (B < C){ Y = B; B = C; C = Y; }
 if (A < B){ Y = A; A = B; B = Y; }
if (A >= B + C) printf("NAO FORMA TRIANGULO\n");
 else if (A * A == B * B + C * C) printf("TRIANGULO RETANGULO\n");
 else if (A * A > B * B + C * C) printf("TRIANGULO OBTUSANGULO\n");
 else if (A * A < B * B + C * C) printf("TRIANGULO ACUTANGULO\n");
if (A == B && B == C) printf("TRIANGULO EQUILATERO\n");
 else if (A == B || B == C) printf("TRIANGULO ISOSCELES\n");
 system("pause");
     }
    
    
