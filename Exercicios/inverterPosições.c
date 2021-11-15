#include <stdio.h>


void inverter(int* var1, int* var2) {
    int var3 = *var1;
    *var1 = *var2;
    *var2 = var3;
}

int main(int argc, char const *argv[])
{
    int var1 = 1;
    int var2 = 2;

    inverter(&var1, &var2);

    printf("var1 = %d\nvar2 = %d", var1, var2);

    return 0;
}

