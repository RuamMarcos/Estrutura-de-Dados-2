#ifndef BINARYHEAP_H
#define BINARYHEAP_H

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
int max_heapify(BinaryHeap h, int n);
int max_heap_create(BinaryHeap h, int n);

#endif
