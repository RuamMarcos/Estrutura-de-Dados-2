#include <stdio.h>
#include <stdlib.h>
#include "BinaryHeap.h"

int main(){
    int *data[128];
    int i=0;
    while(i < MAX){
        int random = rand() % 1000;
        data[i] = random;
        i++;
    }
}