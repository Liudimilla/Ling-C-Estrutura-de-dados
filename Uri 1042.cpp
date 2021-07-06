/*((((Uri 1042))))))
*Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida,
 os valores na sequência como foram lidos.
Entrada
A entrada contem três números inteiros.
Saída
Imprima a saída conforme foi especificado.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1,num2,num3;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    
           if(num1 <= num2 && num2 <= num3){
                   
           printf("%d\n", num3);
		printf("%d\n", num2);
		printf("%d\n", num1);

           
           
           
           }else if(num1 >= num2 && num3 >= num2){
           
           printf("%f\n", num2);
		printf("%f\n", num3);
		printf("%f\n", num1);
           
           
           
           }else if(num2 >= num1 && num1 >= num3){
           printf("%f\n", num3);
		printf("%f\n", num1);
		printf("%f\n", num2);

           
           
           
           }else if(num3 >= num1 && num1 >= num2){
           
          printf("%f\n", num1);
		printf("%f\n", num3);
		printf("%f\n", num2);
           
           
           
           }else if(num2 >= num3 && num3 >= num1){
           
           printf("%f\n", num2);
		printf("%f\n", num1);
		printf("%f\n", num3);           
           
           
           }else if(num3 >= num2 && num2 >= num1){
           
          printf("%f\n", num1);
		printf("%f\n", num2);
		printf("%f\n", num3);
           }
                      
           printf("\n");
          printf("%f\n", num1);
      printf("%f\n", num2);
      printf("%f\n", num3);
      
      system("pause");
}
