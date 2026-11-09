#include <stdio.h>

void exibirLinha(void) {
    for (int i = 0; i < 10; i++) {
        printf("*");
    }
    printf("\n");
}

int main(void) {
    exibirLinha();
    printf("RELATORIO DE ESTOQUE\n");
    exibirLinha();

    return 0;
}
