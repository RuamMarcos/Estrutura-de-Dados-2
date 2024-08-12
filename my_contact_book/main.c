#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include "Ui.h"
#include "LinkedList.h"

int main() {
    int option;
    char input[129];
    int length = 0;
    
    CircList *agenda = create_CircList();

    if (agenda == NULL) {
        printf("Erro ao criar Agenda!\n");
        return -1;
    }
    
    printf("\n\n%s", input);

    while (option != 7){

        gerarMenu();
        scanf("%d", &option);
        
        switch (option) {
            case 1:  
                inserirContato(agenda);        
                break;
            case 2:
                listarContatos(agenda);        
                break;
            case 3:
                buscarContatos(agenda);
                break;
            case 4:
                renomearAgenda(agenda);       
                break;
            case 5:
                salvaContatos(agenda);
                break;
            case 6:
                break;
            case 7:
                break;
            default:
                opcaoInvalida();            
            break;
        }

    }
    

    

    return 0;
}
