#include <stdio.h>,
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *arq;
	
	char nome[21];
	char texto[20];
	int idade;
	float altura;
	
	// fopen => fun��o para abertura do ponteiro do arquivo
	arq = fopen("novo_arquivo.txt", "r");
	
	if(arq == NULL){
		puts("Erro: O arquivo n�o p�de ser lido.");
		
		return 1;
	}
	
	fscanf(arq, "%s%s", texto, nome);
	printf("%s %s\n", texto, nome);
	
	fscanf(arq, "%s%d", texto, &idade);
	printf("%s %d\n", texto, idade);
	
	fscanf(arq, "%s%f", texto, &altura);
	printf("%s %.2f\n", texto, altura);


	/*printf("Digite o seu nome: ");
	gets(nome);
	setbuf(stdin, NULL);
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	setbuf(stdin, NULL);
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	setbuf(stdin, NULL); */
	 
	//Nome: Ulisses	Idade: 19	Altura: 1.74
	fprintf(arq, "Nome: %s\t Idade: %d\t Altura: %.2f", nome, idade, altura);
	
	/*- 
	Modos de abertura do arquivo
		w => abre para escrita (caso o arquivo n�o exista, ele ser� criado; caso exista, ele ser� sobrescrito)
		r => abre para leitura (caso o arquivo n�o exista, ele falhar�; caso exista, abre colocando o ponto de leitura no in�cio do arquivo)
		
	-*/
	
	
	//fgets(nome, 20, arq)
	

	fclose(arq);
	
return 0;
}
