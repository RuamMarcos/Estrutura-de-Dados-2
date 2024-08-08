#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "LinkedList.h"

// Função para criar uma lista circular
CircList *create_CircList() {
    CircList *new_list = (CircList *) malloc(sizeof(CircList));

    if (new_list != NULL) {
        new_list->start = NULL;
        new_list->qty = 0;
        new_list->size = 100;
    }

    return new_list;
}

// Função para inserir um elemento na lista circular
bool CircList_insert(CircList *list, char *value, long int fone) {
    TNo *new_node = (TNo*) malloc(sizeof(TNo));

    if (new_node == NULL) {
        return false;
    }

    strcpy(new_node->nome, value);
    new_node->contato = fone;
    new_node->id = ++list->qty;
    new_node->next = NULL;

    if (list->start != NULL) {
        TNo *aux = list->start;

        // Encontrar o último nó na lista circular
        while (aux->next != list->start) {
            aux = aux->next;
        }

        aux->next = new_node;
        new_node->next = list->start;
    } else {
        list->start = new_node;
        new_node->next = new_node;  
    }

    return true;
}

// Função para imprimir a lista circular
bool CircList_print(CircList *list) {
    if (list == NULL || list->start == NULL) {
        printf("A Lista está vazia!\n");
        return false;
    }
    printf("%s", list->nome);
    printf("\nQty: %d\n", list->qty);
    printf("=========================\n");

    TNo *aux = list->start;

    do {
        printf("%d | %s | %d\n", aux->id, aux->nome, aux->contato);
        aux = aux->next;
    } while (aux != list->start);

    printf("=========================\n");
    return true;
}

void CircList_rename(CircList *list, char *nome){
    strcpy(list->nome, nome);
}