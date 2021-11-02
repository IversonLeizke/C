#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    srand(time(NULL));
    int n = rand() % 11;
    printf("%d", n);
}
