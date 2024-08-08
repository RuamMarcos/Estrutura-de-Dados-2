#include <stdio.h>
#include "LinkedList.h"

int main() {
    CircList *agenda = create_CircList();

    if (agenda == NULL) {
        printf("Erro ao criar Agenda!\n");
        return -1;
    }

    // Inserir alguns elementos na lista
    CircList_insert(minhaLista, "João", 123456789);
    CircList_insert(minhaLista, "Maria", 987654321);
    CircList_insert(minhaLista, "Carlos", 555123456);

    // Imprimir a lista
    CircList_print(minhaLista);


    return 0;
}
