#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade;
    printf("How old are you? ");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("You're old enough to acces this web page!");
    }
    else {
        printf("You're not old enough to acces this web page!");
    }
}