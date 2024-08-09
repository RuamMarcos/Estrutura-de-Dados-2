#ifndef UI_H
#define UI_H
#include "LinkedList.h"
void gerarMenu();
void inserirContato(CircList *agenda);
void listarContatos(CircList *agenda);
void buscarContatos(CircList *list);
bool leitura(char *input, int length);
void renomearAgenda(CircList *agenda);
void opcaoInvalida();

#endif