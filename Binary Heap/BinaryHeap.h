#ifndef BINARY_HEAP_h
#define BINARY_HEAP_H

#include <stdio.h>

#define MAX 128

typedef struct heap {
    int* data[MAX];
    int qty; 
} BinaryHeap;

int parent(int n);
int left(int n);
int right(int n);

//Método para construir uma max binary heap
int max_heapify(int *valor[], int n);
int max_heap_create(int *valor[], int n);

#endif
