#include "item.h"

void sort(Item *a, int lo, int hi){
    int i = 0, menor;
    for(i = lo; i < hi; i++){
        menor = i;
        int j = 0;
        for(j = i+1; j <= hi; j++){
            if(less(a[j], a[menor]))
                menor = j;
        }
        compexch(a[i], a[menor]);
    }
}