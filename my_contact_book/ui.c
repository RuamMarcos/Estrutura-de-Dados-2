#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "Ui.h"
#include <windows.h>
#include "LinkedList.h"

void gerarMenu(){

    system("cls");
    printf("\n\n\nMenu agenda\n");
    printf("===========================\n");
    printf(" [1] | INSERIR CONTATOS\n");
    printf(" [2] | LISTAR CONTATOS\n");
    printf(" [3] | BUSCAR CONTATOS\n");
    printf(" [4] | RENOMEAR AGENDA\n");
    printf(" [5] | SAIR\n");
    printf("===========================\n");
    printf(">> ");
    
}

void inserirContato(CircList *agenda){
    char nome[129];
    long int telefone;

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
}

void listarContatos(CircList *agenda){
    system("cls");
    CircList_print(agenda);
    printf("\n\n");

    printf("Pressione Enter para voltar ao menu");
    getchar();
    getchar();
}

void buscarContatos(CircList *list) {
    char input[128 + 1] = {0}; // String de entrada com capacidade para 128 caracteres e o caractere nulo '\0'
    int length = 0;

    while (1) {
        system("cls");
        TNo *aux = list->start;
        printf("\n============================\n\n");

        if (aux != NULL) { // Verifica se a lista não está vazia
            do {
                if (strncmp(input, aux->nome, length) == 0) {
                    printf("%d | %s | %d\n", aux->id, aux->nome, aux->contato);
                }
                aux = aux->next;
            } while (aux != list->start); // Ajustado para percorrer toda a lista circular
        }

        printf("\n============================\n\n");
        printf(">> ");

        if (_kbhit()) {
            char c = _getch();  // Lê o caractere pressionado

            if (c == 13) { // Enter
                break;
            }

            if (c == 8) {  // Backspace (ASCII 8)
                if (length > 0) {
                    length--;
                    input[length] = '\0';
                    printf("\b \b");  // Move o cursor para trás e apaga o caractere
                }
            } else if (length < 129 - 1) { // Limita o comprimento da string
                input[length++] = c;
                input[length] = '\0';

                // Exibe o caractere digitado
                printf("%c", c);
            }
        }
    }
}

void renomearAgenda(CircList *agenda){
    char nome[129];
    
    system("cls");
    printf("Digite o nome da agenda: ");
    scanf("%49s", nome);

    system("cls");
    printf("\n\n\nAgenda renomeada!");
    Sleep(3000);
    CircList_rename(agenda, nome);
}

void opcaoInvalida(){
    printf("Escolha uma opcao valida!");
    Sleep(4000);
}