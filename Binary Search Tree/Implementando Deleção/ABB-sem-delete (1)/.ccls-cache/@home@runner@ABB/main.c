#include "BinTree.h"
#include <stdio.h>

void printTree(BinTree *tree) {
  printf("Preorder: ");
  BinTree_preorder(tree->root);
  printf("\n");
  printf("Inorder:  ");
  BinTree_inorder(tree->root);
  printf("\n");
}

int main(void) {
  BinTree *T = BinTree_create();
  int keys[] = {5, 2, 3, 4, 1, 6};
  for (int i = 0; i < 6; i++)
    if (!BinTree_insert(T, keys[i]))
      printf("Problema ao inserir %d!\n", keys[i]);
  printTree(T);
  return 0;
}