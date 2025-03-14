#include <stdio.h>
#include <locale.h>
#define NUM 4

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int media, i, matr, notas, nota_maior, nota1, nota2, nota3, nota4;
	char nome[200];
	
	printf("Número da mátricula: ");
	scanf("%d", &matr);
	printf("Nome: ");
	scanf("%s", &nome);
	
	printf("Nota 1: ");
	scanf("%d", &nota1);
	printf("Nota 2: ");
	scanf("%d", &nota2);
	printf("Nota 3: ");
	scanf("%d", &nota3);
	printf("Nota 4: ");
	scanf("%d", &nota4);
	
	if (nota1 > nota2 && nota3 && nota4){
		nota_maior = nota1;
	}
	else if (nota2 > nota1 && nota3 && nota4){
		nota_maior = nota2;
	}
	else if (nota3 > nota1 && nota2 && nota4){
		nota_maior = nota3;
	}
	else{
		nota_maior = nota4;
	}
	
	media = (nota1 + nota2 + nota3 + nota4)/4;
	
	printf("\nMatrícula: %d", matr);
	printf("\nNome: %s", nome);
	printf("\nMaior nota: %d", nota_maior);
	printf("\nMédia: %d", media);
	
	if (media >= 7){
		printf("\nAprovado!\n");
	}
	else if (media >= 4){
		printf("\nRecuperação\n");
	}
	else{
		printf("\nReprovado!\n");
	}
		
return 0;
}

/*	printf("Nota 1: ");
	scanf("%d", &nota1);
	printf("Nota 2: ");
	scanf("%d", &nota2);
	printf("Nota 3: ");
	scanf("%d", &nota3);
	printf("Nota 4: ");
	scanf("%d", &nota4); */
