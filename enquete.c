#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int esc, win, uni, lin, net, mac, out;
    esc = 1;
    win = uni = lin = net = mac = out = 0;
    printf("Bem vindo a nossa pesquisa!\n");
    while (esc != 0) {
        printf("\nQual o melhor sistema para servidor?\n");
        printf("1 - Windows Server\n2 - Unix\n3 - Linux\n4 - Netware\n5 - Mac OS\n6 - Outros\n");
        do {
            printf("Sua opnião: ");
            scanf("%d", &esc);
            if (esc < 0 || esc > 6) printf("Opção invalida, escolha novamente.\n");
        } while (esc < 0 || esc > 6);
        switch (esc) {
            case 1:
                win += 1;
                break;
            case 2:
                uni += 1;
                break;
            case 3:
                lin += 1;
                break;
            case 4:
                net += 1;
                break;
            case 5:
                mac += 1;
                break;
            case 6:
                out += 1;
        }
    }
    printf("\n\nResultado: \n");
    printf("Windows Server: %d\n", win);
    printf("Unix:           %d\n", uni);
    printf("Linux:          %d\n", lin);
    printf("Netware:        %d\n", net);
    printf("Mac OS:         %d\n", mac);
    printf("Outros:         %d\n", out);
}
