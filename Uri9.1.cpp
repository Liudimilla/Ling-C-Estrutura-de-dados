/*Sal�rio com B�nus
Fa�a um programa que leia o nome de um vendedor, 
o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s 
(em dinheiro). Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas
 efetuadas, informar o total a receber no final do m�s, com duas casas decimais.
Entrada
O arquivo de entrada cont�m um texto (primeiro nome do vendedor) e 2 valores de dupla precis�o (double) com duas casas decimais, representando o sal�rio fixo do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente.
Sa�da
Imprima o total que o funcion�rio dever� receber, conforme exemplo fornecido.
*/
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char nome;
    double sal, tot_ved,salario;
    
    scanf("%s",&nome);
    scanf("%lf %lf",&sal,&tot_ved);
    
    salario = sal+(tot_ved*0.15);
    
    printf("TOTAL = R$ %.2lf\n", salario );
    
    system("pause");
}
    
    
    
