#ifndef BINTREE_H
#define BINTREE_H
#include <stdbool.h>
#include <stdio.h>

typedef struct _no {
  int key;
  struct _no *left, *right, *p;
} TNo;

typedef struct {
  TNo *root;
} BinTree;

BinTree *BinTree_create();
TNo *TNo_createNFill(int);
bool BinTree_insert(BinTree *, int);

void BinTree_preorder(TNo *);
void BinTree_inorder(TNo *);
void BinTree_postorder(TNo *);
bool BinTree_delete(BinTree *, int);
#endif