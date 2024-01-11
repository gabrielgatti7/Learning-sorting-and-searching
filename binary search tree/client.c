#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bst.h"

int main(int argc, char* argv[]){
    int n = atoi(argv[1]);
    Bst* t = createBst();

    srand(time(NULL));

    for(int i = 0; i < n; i++){
        int r = rand();
        t = insertBst(t, r);
    }

    int h = heightBst(t);
    printf("Height: %d", h);

    freeBst(t);
}