#include <stdio.h>
#include "BinaryHeap.h"

int parent(int n){
    return n/2;
}

int left(int n){
    return n*2;
}

int right(int n){
    return (n*2 +1);
}

//Método para construir uma max binary heap
void max_heapify(BinaryHeap h, int n){
    int leftn = left(n);
    int rightn = right(n);
    int largest = 0;
    
    if (n <= BinaryHeap.qty && h.data[i] < h.data[leftn]){
        largest = leftn;
    }else{
        largest = n;
    }
    if (n <= BinaryHeap.qty && h.data[i] < h.data[rightn]){
        largest = rightn;
    }
    if (largest != n){
        int temp = h.data[n];
        h.data[n] = h.data[largest];
        h.data[largest] = temp;
        max_heapify(h, n);
    }
}

int max_heap_create(BinaryHeap h, int n){

    for(int i = h.qty/2; i <= 1; i--){
        max_heapify(h.data, i);
    }
}