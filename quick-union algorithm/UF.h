#include <stdbool.h>

void UF_init(int size);

int UF_find(int i);

void UF_union(int p, int q);

bool UF_connected(int p, int q);