#include <stdio.h>
#include <stdlib.h>

abb * criarArvore(){
    abb * nova_arvore = (*abb) malloc(sizeof(abb));

    if (nova_arvore != NULL){
        return nova_arvore;
    }
    
}

bool inserirNo(abb arvore, int valor){
    No * novo_no = (*No) malloc(sizeof(No));
    novo_no->value = valor;

    No *paiNo;
    No *aux = abb->raiz;

    while (aux != NULL){
        paiNo = aux;

        if (novo_no->value < aux->value){
            aux = aux->left;
        }else{
            aux = aux->right;
        }
    }

    novo_no->parent = paiNo;

    if(paiNo == NULL){
        arvore->raiz = novo_no
    }else if (novo_no->value < paiNo->value){
        paiNo->left = novo_no;
    } else{
        paiNo->right = novo_no;
    }

}

void imprimirPreOrdem(abb *arvore){
    mostrarPreOrdem(arvore->raiz);
    if(arvore->raiz != NULL) mostrarPreOrdem(arvore->raiz);
}

void mostrarPreOrdem(No* no){
    printf("%d", no->value);
    if(no->left != NULL) mostrarPreOrdem(no->left);
    if(no->right != NULL) mostrarPreOrdem(no->right);
}

void imprimirPosOrdem(abb *arvore){
    mostrarPosOrdem(arvore->raiz);
    if(arvore->raiz != NULL) mostrarPosOrdem(arvore->raiz)
}

void mostrarPosOrdem(No* no){
    
    if(no->left != NULL) mostrarPreOrdem(no->left);
    if(no->right != NULL) mostrarPreOrdem(no->right);
    printf("%d", no->value);
}
