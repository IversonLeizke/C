#include <stdio.h>

int main(int argc, char const *argv[])
{
    float media[3] = {13.75, 10.25, 98.50};
    for (int i = 0; i < 3; ++i) {
        printf("media[%d] = %.2f\n", i, media[i]);
    }
    return 0;
}
