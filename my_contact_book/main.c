#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "LinkedList.h"

void gerarMenu();

int main() {
    int option;
    char nome[129];
    long int telefone;
    CircList *agenda = create_CircList();

    if (agenda == NULL) {
        printf("Erro ao criar Agenda!\n");
        return -1;
    }

    gerarMenu();

    while (option != 5)
    {
        gerarMenu();

        scanf("%d", &option);
        
        switch (option) {
    
            case 1:  
                
                system("cls");
                printf("Nome: ");
                scanf("%128s", nome);
                
                getchar();

                printf("Telefone: ");
                scanf("%ld", &telefone);

                system("cls");
                if(CircList_insert(agenda, nome, telefone)){
                    printf("Numero inserido com sucesso!");   
                }else{
                    printf("Falha ao inserir numero!");
                }

                Sleep(3000);

                break;

            case 2:
                system("cls");
                CircList_print(agenda);
                
                printf("\nPressione Enter para voltar ao menu\n>>");
                getchar();
                getchar();
                break;

            case 3:
                break;

            case 4:
                system("cls");
                printf("Digite o nome da agenda: ");
                scanf("%49s", nome);

                system("cls");
                printf("\n\nAgenda renomeada!");
                Sleep(3000);
                CircList_rename(agenda, nome);
                break;

            case 5:
                break;

            default:
                printf("Escolha uma opcao valida!");
                Sleep(4000);
                break;
        }

        
    }
    

    

    return 0;
}

void gerarMenu(){

    system("cls");
    printf("\n\nMenu agenda\n");
    printf("===========================\n");
    printf(" [1] | INSERIR CONTATOS\n");
    printf(" [2] | LISTAR CONTATOS\n");
    printf(" [3] | BUSCAR CONTATOS\n");
    printf(" [4] | RENOMEAR AGENDA\n");
    printf(" [5] | SAIR\n");
    printf("===========================\n");
    printf(">> ");
    
}
