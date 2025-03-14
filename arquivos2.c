#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct{
	char nome[30];
	float salario;
}func;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *arq;

	if( (arq = fopen("arquivinhostruct.txt", "a")) == NULL){
		puts("Erro na abertura do arquivo.");
		
		return 1;
	}
	
	func f;
	
	/* 
	O ponteiro se mover� para o
		SEEK_CUR 1 => ponto atual no arquivo
		SEEK_END 2 => fim do arquivo
		SEEK_SET 0 => inicio do arquivo
	*/
	
	rewind(arq); // reposiciona o indicador de posi��o para o in�cio do arquivo
	fseek(arq, 0, 2); //move o indicador de posi��o para um determinado local
	printf("%d\n", ftell(arq)); //fornece o tamanho do arquivo em rela��o a posi��o do indicador de posi��o
	
	printf("Digite ponto para finalizar o cadastramento: \n");
	
	while(1){
		printf("\nNome: ");
		gets(f.nome);
		setbuf(stdin, NULL);
		
		if(!strcmp(f.nome, ".")) 	break;
					
			printf("\nSalario: ");
			scanf("%f", &f.salario);
			setbuf(stdin, NULL);
		
		fwrite(&f, sizeof(func), 1, arq);
	}
	
	
	fclose(arq);
	
return 0;	
}
