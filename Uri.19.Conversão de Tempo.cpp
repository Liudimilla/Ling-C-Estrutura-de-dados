/*Leia um valor inteiro, que � o tempo de dura��o em segundos de um determinado evento em uma f�brica, e informe-o expresso no formato 
horas:minutos:segundos.
Entrada
O arquivo de entrada cont�m um valor inteiro N.
Sa�da
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
*/
#include<stdio.h>
#include<stdlib.h>

int main()

{

    int n,hr,ms,sg;

    scanf("%d",&n);

    hr=n/(60*60);

    ms=(n%(60*60))/60;

    sg=(n%(60*60))%60;

    printf("%d:%d:%d\n",hr,ms,sg);
    system("pause");
}
