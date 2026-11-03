/*
 * Aula 16 - Atividade para entrega
 * Desafio: Contador de caracteres
 *
 * Recebe uma palavra, percorre seus caracteres com for
 * e apresenta a quantidade de letras digitadas,
 * sem utilizar strlen.
 */
#include <stdio.h>

int main(void) {
    char palavra[50];
    int contador = 0;

    printf("===== CONTADOR DE CARACTERES =====\n\n");
    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("\nA palavra \"%s\" possui %d caracteres.\n", palavra, contador);

    return 0;
}
