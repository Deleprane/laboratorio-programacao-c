/*
 * Aula 17 - 3a Questao
 * Identificacao de cursos (CC ou SI) e mensagem personalizada
 * para o estudante usando strcmp, strlen, strcpy e strcat.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[30];
    char codigo[10];
    char estudante[30];
    char mensagem[50] = "Ola, ";

    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");

    printf("Nome do estudante: ");
    scanf("%29s", nome);

    printf("Codigo do curso: ");
    scanf("%9s", codigo);

    strcpy(estudante, nome);

    strcat(mensagem, estudante);
    strcat(mensagem, "!");

    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", estudante);

    if (strcmp(codigo, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else if (strcmp(codigo, "SI") == 0) {
        printf("Curso: Sistemas de Informacao\n");
    } else {
        printf("Curso: Codigo invalido (use CC ou SI)\n");
    }

    printf("Caracteres no nome: %zu\n", strlen(nome));
    printf("\n%s\n", mensagem);

    return 0;
}
