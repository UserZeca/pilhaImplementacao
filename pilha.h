#ifndef PILHA_H
#define PILHA_H

typedef struct No No;
typedef struct Pilha Pilha;

/**!
 * @brief Função que cria um nó dinamicamente para ser utilizado na estrutura da pilha
 * @param valor dado a ser inserido dentro do nó
 * @return Retorna um ponteiro para o nó criado
*/
No* criaNo(int valor);   

/**!
 * @brief Função que cria a pilha, alocando mémoria para a estrutura de dados e apontando o topo para o vazio (NULL).
 * @return retorna um ponteiro para a estrutura pilha alocada na memória
*/
Pilha *pilha_cria();

/**!
 * @brief Função que verifica se a pilha está vazia, ou seja, se o seu topo aponta para o vazio (NULL).
 * @return retorna 1 caso esteja vazia, caso contrário retorna 0
*/
int pilha_vazia(Pilha *p);

/**!
 * @brief Função que insere nó (item/elemento) na pilha
 * @param p pilha no qual será inserido um novo nó (item/elemento)
 * @param x item/elemento a ser inserido na pilha
 * @return (void)
*/
void pilha_push(Pilha *p, int x);

/**!
 * @brief Função que remove item/elemento da pilha, caso a pilha não esteja vazia
 * @param p pilha no qual será removido o nó (item/elemento) do topo
 * @return retorna o dado do nó removido da pilha
*/
int pilha_pop(Pilha *p);

/**!
 * @brief Função que exibe elementos presentes na pilha
 * @param p Pilha a ser exibida
 * @return (void)
*/
void exibe_pilha(Pilha *p);

/**!
 * @brief Função que desaloca/libera da memória a pilha
 * @param p Pilha a ser desalocada/liberada
 * @return (void)
*/
void pilha_libera(Pilha *p);

#endif