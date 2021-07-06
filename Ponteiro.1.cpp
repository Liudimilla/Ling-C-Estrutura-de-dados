/*O operador de sele��o de campo (.) tem maior preced�ncia que o operador de conte�do (*).
 Por esse motivo, o uso de par�nteses � obrigat�rio em (*ptr).nome e em (*ptr).idade. Em C,
  temos um operador espec�fico para acessar campos de estruturas a partir de ponteiro,
   esse � o operador -> (seta). Usando esse operador, em vez de escrever (*ponteiro).campo 
   podemos escrever ponteiro->campo.
*/

#include <stdio.h>
#include <stdlib.h>
// defini��o da estrutura
struct Pessoa {
    char nome[80];
    int idade;  
};
main () {
    // declara��o e inicializa��o da estrutura
    struct Pessoa pessoa = {"Ana", 22};
    // declara��o de um ponteiro para o tipo da estrutura
    struct Pessoa *ptr;
    // faz o ponteiro ptr apontar para a estrutura pessoa
    ptr = &pessoa;
    // imprime os dados da estrutura acessando seus campos via ponteiro
    printf ("%s - %d\n\n", (*ptr).nome, (*ptr).idade);
    system ("PAUSE");
}
