// quick sort top-down recursivo com mediana de 3

#include "item.h"
#include <stdlib.h>

int partition(Item *a, int lo, int hi) {
    int i = lo, j = hi+1;
    Item v = a[lo];
    while(1) {
        while (less(a[++i], v)) // Find item on left to swap.
            if (i == hi) break;
        while (less(v, a[--j])) // Find item on right to swap.
            if (j == lo) break;
        if (i >= j) break; // Check if pointers cross.
        exch(a[i], a[j]);
    }
    exch(a[lo], a[j]); // Swap with partitioning item.
    return j; // Return index of item known to be in place.
}

// void shuffle(Item *a, int N) {
//     struct timeval tv; gettimeofday(&tv, NULL);
//     srand48(tv.tv_usec);
//     for (int i = N-1; i > 0; i--) {
//         int j = (unsigned int) (drand48()*(i+1));
//         exch(a[i], a[j]);
//     }
// }

int median_of_3(Item* i, int lo, int hi){
	int a = rand() % (hi - lo + 1);
	int b = rand() % (hi - lo + 1);
	int c = rand() % (hi - lo + 1);
	int v1 = i[a], v2 = i[b], v3 = i[c];
	if(less(v1,v2)){ // 1,2,3 - 1,3,2
		if(less(v2,v3))	return b;
		else if(less(v3,v2)) return c;
	}
	else if(less(v2,v2)){ // 2,1,3 - 2,3,1
		if(less(v2,v3))	return b;
		else if(less(v3,v2)) return c;
	}
	else
		return b;
}

void quick_sort(Item *a, int lo, int hi) {
    if (hi <= lo ) {
        return;
    }
    int median = median_of_3(a, lo, hi);
    exch(a[lo], a[median]);
    int j = partition(a, lo, hi);
    quick_sort(a, lo, j-1);
    quick_sort(a, j+1, hi);
}   

void sort(Item *a, int lo, int hi) {
    // shuffle(a, hi-lo+1); // Needed for performance guarantee.
    quick_sort(a, lo, hi);
}