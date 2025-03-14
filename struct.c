#include <stdio.h>
#include <locale.h>

typedef struct notas_dos_alunos
{
    char  disc[20];
    float P1;
} notas;

typedef struct endereco_dos_alunos
{
    char rua[100];
    int  numero;
} endereco;

typedef struct cadastro_dos_alunos
{
    char     nome[50];
    int      idade;
    endereco ender;
    notas    nota;
} cadastro;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cadastro aluno[15];

    printf("Nome do aluno: ");
    scanf("%s", &aluno[0].nome);
    printf("Idade do aluno: ");
    scanf("%d", &aluno[0].idade);

    printf("Endereço do aluno: ");
    scanf("%s", &aluno[0].ender.rua);
    printf("Número de residência do aluno: ");
    scanf("%d", &aluno[0].ender.numero);

    printf("Digite a disciplina: ");
    scanf("%s", &aluno[0].nota.disc);
    printf("Digite a nota do aluno nessa disciplina: ");
    scanf("%f", &aluno[0].nota.P1);

    printf("\nNome do aluno: %s\n", aluno[0].nome);
    printf("Idade do aluno: %d\n", aluno[0].idade);
    printf("Endereço do aluno: %s\n", aluno[0].ender.rua);
    printf("Número habitacional do aluno: %d\n", aluno[0].ender.numero);
    printf("Disciplina: %s\n", aluno[0].nota.disc);
    printf("Nota do aluno nesta disciplina: %.2f\n", aluno[0].nota.P1);

    return 0;
}
