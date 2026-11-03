/*
 * Aula 17 - 2a Questao
 * Cadastro de produtos de uma loja de informatica
 * (categoria HARDWARE ou PERIFERICO) usando strlen, strcmp,
 * strcpy e strcat.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[30];
    char categoria[20];
    char copia[30];
    char descricao[60] = "Produto: ";

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    printf("Nome do produto: ");
    scanf("%29s", produto);

    printf("Categoria: ");
    scanf("%19s", categoria);

    strcpy(copia, produto);
    strcat(descricao, copia);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", copia);
    printf("Caracteres: %zu\n", strlen(produto));

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: Periferico\n");
    } else {
        printf("Categoria: Invalida\n");
        printf("\nCadastro nao concluido. Informe HARDWARE ou PERIFERICO.\n");
        return 0;
    }

    printf("\nDescricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}
