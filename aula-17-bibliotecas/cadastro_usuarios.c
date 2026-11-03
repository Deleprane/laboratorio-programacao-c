/*
 * Aula 17 - 1a Questao
 * Cadastro de usuarios e identificacao do perfil de acesso
 * (ADMIN ou COMUM) usando strlen, strcmp, strcpy e strcat.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[30];
    char perfil[20];
    char confirmacao[30];
    char mensagem[80] = "Bem-vindo(a), ";

    printf("===== CADASTRO DE USUARIOS =====\n\n");

    printf("Digite seu nome: ");
    scanf("%29s", nome);

    printf("Digite seu perfil: ");
    scanf("%19s", perfil);

    strcpy(confirmacao, nome);

    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", confirmacao);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));

    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: Administrador\n");
    } else if (strcmp(perfil, "COMUM") == 0) {
        printf("Perfil: Comum\n");
    } else {
        printf("Perfil: Invalido\n");
        printf("\nCadastro nao realizado. Informe ADMIN ou COMUM.\n");
        return 0;
    }

    printf("\n%s\n", mensagem);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}
