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

   buscarContatos(agenda);
    
    printf("\n\n%s", input);

    // while (option != 5)
    // {
     

    //     // scanf("%d", &option);
        
    //     switch (option) {
    
    //         case 1:  
                
              
    //             break;

    //         case 2:
                
    //             break;

    //         case 3:
    //             break;

    //         case 4:
               
    //             break;

    //         case 5:
    //             break;

    //         default:
                
    //             break;
    //     }

        
    // }
    

    

    return 0;
}
