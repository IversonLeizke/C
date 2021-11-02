#include <stdio.h>
#include <malloc.h>

// Malloc, ao invês de reservar um espaço na memoria usando uma variavel, 
// usa o malloc para alocar um espaço de acordo com o tamanho do tipo.

int main(int argc, char const *argv[])
{
    int* y = (int*) malloc(sizeof(int));
    *y = 20;
    int z = sizeof(int);
    printf("*y=%i z=%i\n", *y, z);
    return 0;
}
