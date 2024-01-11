#ifndef BST_H
#define BST_H

typedef struct bst Bst;

Bst* createBst();

Bst* insertBst(Bst* t, int key);

int heightBst(Bst* t);

Bst* freeBst(Bst* t);

#endif //BST_H