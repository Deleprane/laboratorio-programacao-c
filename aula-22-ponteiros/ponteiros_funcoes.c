#include <stdio.h>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main(void) {
    int numero;

    printf("===== PONTEIROS E FUNCOES =====\n\n");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\nValor original: %d\n", numero);

    dobrar(&numero);

    printf("Valor apos dobrar: %d\n", numero);

    return 0;
}
