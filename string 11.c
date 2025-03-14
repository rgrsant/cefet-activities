#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[100]; 
	int x, i, j, nome_tam;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	nome_tam = strlen(nome);
	
	printf("Digite o primeiro valor entre 0 e %d: ", nome_tam);
	scanf("%d", &i);
	printf("Digite o segundo valor entre 0 e %d: ", nome_tam);
	scanf("%d", &j);
	
	printf("\n\n");
	
	if(i > nome_tam || i < 0){
		printf("O seu primeiro valor não está entre 0 e %d", nome_tam);
		}
	else
	if(j > nome_tam  || j < 0){
		printf("O seu segundo valor não está entre 0 e %d", nome_tam);
	}
	else{
		for (i; i <= j; i++){
			printf("Caractere na posição %d: %c \n", i, nome[i]);
		}
	}
	
	
return 0;
}
