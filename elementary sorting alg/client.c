#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "item.h"

extern void sort(Item *a, int lo, int hi);

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    Item *vet = (Item*) malloc(n * sizeof(Item));

    int i = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    clock_t start, stop;
    start = clock();
    sort(vet, 0, n-1);
    stop = clock();
    double time_taken = ((double) stop - start) / CLOCKS_PER_SEC;
    
    /* for(i = 0; i < n; i++){
        printf("%d ", vet[i]);
    } */

    printf("Elapsed time: %.3f\n", time_taken);
    free(vet);
}