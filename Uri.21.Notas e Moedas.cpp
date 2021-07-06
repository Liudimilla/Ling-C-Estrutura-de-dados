/*Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monet�rio. A seguir, 
calcule o menor n�mero de notas e moedas poss�veis no qual o valor pode ser decomposto. As notas consideradas s�o de 100, 50, 
20, 10, 5, 2. As moedas poss�veis s�o de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a rela��o de notas necess�rias.
Entrada
O arquivo de entrada cont�m um valor de ponto flutuante N (0 = N = 1000000.00).
Sa�da
Imprima a quantidade m�nima de notas e moedas necess�rias para trocar o valor inicial, conforme exemplo fornecido.
*/
#include<stdio.h>
#include<stdlib.h>
int main ()
{

    double n_1, d2[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01};

    int t = 0, cll;

    scanf("%lf", &n_1);

    printf("NOTAS:\n");

    t = 0;

    n_1+=1e-9;

    while (d2[t] >= 0.01)

    {

        cll = 0;

        while (n_1 >= d2[t])

        {

            n_1 -= d2[t];

            cll++;

        }

        if (d2[t] == 1.0)

            printf("MOEDAS:\n");

        if (d2[t] >= 2.0 )

            printf("%d nota(s) de R$ %.2f\n", cll, d2[t]);

        else

            printf("%d moeda(s) de R$ %.2f\n", cll, d2[t]);

        t++;
}
    
    system("pause")

}
