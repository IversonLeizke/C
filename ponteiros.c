#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x =0;
    int* y = &x;
    *y = 30;
    printf("Valor atual de x: %i\n", x);
    return 0;
}
