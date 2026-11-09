#include <stdio.h>

int calcularFatorial(int numero) {
    int fatorial = 1;

    for (int i = 2; i <= numero; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main(void) {
    int numero;

    printf("===== CALCULADORA DE FATORIAL =====\n\n");

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 0 || numero > 12) {
            printf("Valor invalido! Digite um numero entre 0 e 12.\n\n");
        }
    } while (numero < 0 || numero > 12);

    printf("\nFatorial de %d = %d\n", numero, calcularFatorial(numero));

    return 0;
}
