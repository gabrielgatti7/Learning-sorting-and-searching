// merge sort top-down recursivo com cut-off para insertion sort

#include "item.h"
#include "stdlib.h"
#define CUTOFF 7

void merge(Item *a, Item *aux, int lo, int mid, int hi) {
    for (int k = lo; k <= hi; k++)
        aux[k] = a[k]; // Copy array
    int i = lo, j = mid+1;
    for (int k = lo; k <= hi; k++) { // Merge
        if (i > mid) 
            a[k] = aux[j++];
        else if (j > hi) 
            a[k] = aux[i++];
        else if (less(aux[j], aux[i])) 
            a[k] = aux[j++];
        else 
            a[k] = aux[i++];
    }
}

void insert_sort(Item *a, int lo, int hi) {
    int i = 0;
    for(i=lo;i<=hi;i++){
        int j = 0;
        for(j=i;j>lo && less(a[j], a[j-1]); j--){
            compexch(a[j-1], a[j]);
        }
    }
}

void merge_sort(Item *a, Item *aux, int lo, int hi) {
    if (hi <= lo + CUTOFF - 1) {
        insert_sort(a, lo, hi);
        return;
    }
    int mid = lo + (hi - lo) / 2;
    merge_sort(a, aux, lo, mid);
    merge_sort(a, aux, mid+1, hi);
    merge(a, aux, lo, mid, hi);
}

void sort(Item *a, int lo, int hi) {
    int n = (hi - lo) + 1;
    Item *aux = malloc(n * sizeof(Item));
    merge_sort(a, aux, lo, hi);
    free(aux);
}