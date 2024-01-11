#include "item.h"

void sort(Item *a, int lo, int hi) {
    int i = 0;
    for(i=lo;i<=hi;i++){
        int j = 0;
        for(j=i;j>lo && less(a[j], a[j-1]); j--){
            compexch(a[j-1], a[j]);
        }
    }
}