#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "Ui.h"
#include <windows.h>
#include "LinkedList.h"

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
    char nome[129];
    int telefone;
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

void buscarContatos(CircList *list){
    
    char input[129];
    int length = 0;
        // Criar um método "modoBusca":
        // -> atualizar o valor da string de busca a cada atualização inserida.
        // -> Chama o método de Pesquisar a cada atualização

        // Criar método "pesquisar"
        // -> limpar tela
        // -> Imprimir contatos com o texto de busca encontrado

    while (1) {
        if (_kbhit()) {
            char c = _getch();  // Lê o caractere pressionado

            if(c == 13) break;

            if (c == 8) {  // Detecta o backspace (ASCII 8)
                if (length > 0) {
                    length--;
                    input[length] = '\0';
                    printf("\b \b");  // Move o cursor para trás e apaga o caractere
                }
            } else if (length < 129 - 1) {
                // Armazena o caractere e incrementa o tamanho da string
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
    printf("\n\nAgenda renomeada!");
    Sleep(3000);
    CircList_rename(agenda, nome);
}

void opcaoInvalida(){
    printf("Escolha uma opcao valida!");
    Sleep(4000);
}