#include <stdlib.h>
#include <stdio.h>
#include "bst.h"

struct bst{
    int key;
    struct bst* lt;
    struct bst* rt;
};

Bst* createBst(){
    return NULL;
}

Bst* insertBst(Bst* t, int key){
    if(t == NULL){
        // printf("aa");
        t = malloc(sizeof(Bst));
        t->key = key;
        t->lt = NULL;
        t->rt = NULL;
    }
    else if(key > t->key)
        t->rt = insertBst(t->rt, key);
    else if(key < t->key)
        t->lt = insertBst(t->lt, key);
    // printf("Key: %d", t->key);
    return t;
}

int heightBst(Bst* t){
    if(t == NULL)
        return -1;
    else{
        int hl = heightBst(t->lt);
        int hr = heightBst(t->rt);
        if(hl > hr)
            return hl + 1;
        else
            return hr + 1;
    }
}


Bst* freeBst(Bst* t){
    if(t != NULL){
        freeBst(t->lt);
        freeBst(t->rt);
        free(t);
    }
    return NULL;
}