/*O operador de seleção de campo (.) tem maior precedência que o operador de conteúdo (*).
 Por esse motivo, o uso de parênteses é obrigatório em (*ptr).nome e em (*ptr).idade. Em C,
  temos um operador específico para acessar campos de estruturas a partir de ponteiro,
   esse é o operador -> (seta). Usando esse operador, em vez de escrever (*ponteiro).campo 
   podemos escrever ponteiro->campo.
*/

#include <stdio.h>
#include <stdlib.h>
// definição da estrutura
struct Pessoa {
    char nome[80];
    int idade;  
};
main () {
    // declaração e inicialização da estrutura
    struct Pessoa pessoa = {"Ana", 22};
    // declaração de um ponteiro para o tipo da estrutura
    struct Pessoa *ptr;
    // faz o ponteiro ptr apontar para a estrutura pessoa
    ptr = &pessoa;
    // imprime os dados da estrutura acessando seus campos via ponteiro
    printf ("%s - %d\n\n", (*ptr).nome, (*ptr).idade);
    system ("PAUSE");
}
