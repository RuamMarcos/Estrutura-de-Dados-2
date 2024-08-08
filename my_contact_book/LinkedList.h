#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdbool.h>

// Definição das estruturas TNo e CircList
typedef struct _node {
    struct _node *next;
    unsigned int id;
    char nome[129];
    int contato;
} TNo;

typedef struct _circular_list {
    TNo *start;
    int qty;
    int size;
} CircList;

// Declarações das funções
CircList *create_CircList();

bool CircList_insert(CircList *list, char *value, int fone);

bool CircList_print(CircList *list);

#endif // LINKED_LIST_H
