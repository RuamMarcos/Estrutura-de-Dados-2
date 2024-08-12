#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdbool.h>

// Definição das estruturas TNo e CircList
typedef struct _node {
    struct _node *next;
    int id;
    char nome[129];
    long int contato;
} TNo;

typedef struct _circular_list {
    char nome[50];
    TNo *start;
    int qty;
    int size;
} CircList;

// Declarações das funções
CircList *create_CircList();

bool CircList_insert(CircList *list, char *value, long int fone);

bool CircList_print(CircList *list);

void CircList_rename(CircList *list, char *);
#endif // LINKED_LIST_H
