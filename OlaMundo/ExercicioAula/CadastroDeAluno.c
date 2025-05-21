#include <stdio.h>

int main() {
    int idade;
    int matricula;
    float altura;
    char  nome[50];
    
    printf("Digite seu nome:");
    scanf("%s", nome); 

    printf("Digite sua idade:");
    scanf("%d", &idade);

    printf("Digite sua matricula:");
    scanf("%d", &matricula);

    printf("Digite sua altura:");
    scanf("%f", &altura);

    printf("\n\n");
    printf("Cadastro de Aluno:\n");
    printf("nome do Aluno: %s \n", nome);
    printf("Matricula: %d \n", matricula);
    printf("Idade: %d \n", idade);
    printf("Altura: %f \n", altura);
    
    printf("\n");
    
    printf("cadastro realizado com sucesso!\n");
    printf("Aperte enter para continuar...");

    return 0;
}