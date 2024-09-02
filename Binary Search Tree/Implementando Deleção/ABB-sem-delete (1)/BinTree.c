#include "BinTree.h"
#include <stdio.h>
#include <stdlib.h>

BinTree *BinTree_create() {
  BinTree *tree = (BinTree *)malloc(sizeof(BinTree));
  if (tree)
    tree->root = NULL;
  return tree;
}
TNo *TNo_createNFill(int key) {
  TNo *novo = malloc(sizeof(TNo));
  if (novo) {
    novo->key = key;
    novo->left = NULL;
    novo->right = NULL;
    novo->p = NULL;
  }
  return novo;
}

bool BinTree_insert(BinTree *T, int key) {
  TNo *z = TNo_createNFill(key);
  if (z == NULL)
    return false;
  TNo *x = T->root;
  TNo *y = NULL;
  while (x != NULL) {
    y = x;
    x = (z->key < x->key) ? x->left : x->right;
  }
  z->p = y;
  if (y == NULL)
    T->root = z;
  else {
    if (z->key < y->key)
      y->left = z;
    else
      y->right = z;
  }
  return true;
}

void BinTree_preorder(TNo *root) {
  if (root != NULL) {
    printf("%d, ", root->key);
    BinTree_preorder(root->left);
    BinTree_preorder(root->right);
  }
}
void BinTree_inorder(TNo *root) {
  if (root != NULL) {
    BinTree_inorder(root->left);
    printf("%d, ", root->key);
    BinTree_inorder(root->right);
  }
}
void BinTree_postorder(TNo *);

bool BinTree_delete(BinTree *T, int key) {

  TNo *z = T->root;

  while(x != NULL && key != x->key){
    z = (key < z->key) ? z->left : z->right;
  }
  if(z =)



  // Encontre o no z, se ele nao tiver retorne false
  // algoritmo de deleção visto
  // Free no no z
  // retorne true

  //Imprimir por nível
  //Calcular a altura da árvore
}