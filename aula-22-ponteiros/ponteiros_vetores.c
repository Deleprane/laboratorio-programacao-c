#include <stdio.h>

int main(void) {
    int numeros[5] = {10, 20, 30, 40, 50};
    int *ponteiro = numeros;

    printf("===== PONTEIROS E VETORES =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(ponteiro + i));
    }

    return 0;
}
