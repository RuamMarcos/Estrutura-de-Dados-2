
#include <stdio.h>
#include <stdlib.h>

#ifndef "ABB_H"

#define "ABB_H"

typedef binarySearchTree{

    No* raiz;

} abb;

typedef node{
    No* parent;
    
    int value;
    
    No* left;
    No* right;

} No;

abb criarArvore();
bool inserirNo(int valor);
void mostrarPreOrdem(No * no);
void mostrarPosOrdem(No * no);
void imprimirPosOrdem(abb *arvore);
void imprimirPreOrdem(abb *arvore);

#endif 