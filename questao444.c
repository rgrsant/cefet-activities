#include <stdio.h>
#include <string.h>
#include <locale.h>

//int posicao(int pos);

typedef struct{
	char nome[30];
	float valor;
	int quant;
}merc;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *arq;

	if( (arq = fopen("mercadoria.txt", "r")) == NULL){
		puts("Erro na abertura do arquivo.");
		
		return 1;
	}
	
	merc f;
	
//	rewind(arq); // reposiciona o indicador de posição para o início do arquivo
//	fseek(arq, 0, SEEK_SET); //move o indicador de posição para um determinado local
//	printf("%d\n", ftell(arq)); //fornece o tamanho do arquivo em relação a posição do indicador de posição
	
	/* posiçao(pos)
	0 => 1 >> (pos -1) * sizeof(struct func) = (1 - 1) * 36 = 0
	1 => 2 >> (pos -1) * sizeof(struct func) = (2 - 1) * 36 = 36
	2 => 3 >> (pos -1) * sizeof(struct func) = (3 - 1) * 36 = 72
	*/
	
	printf("Nome\t Salário\n\n");
	
	while(1){
		
	//	rewind(arq);
	//	fseek(arq, posicao(1), SEEK_SET);
		fread(&f, sizeof(merc), 1, arq);

		if(feof(arq))	break;
		
		printf("%s\t %f\t %d\n", f.nome, f.valor, f.quant);
	}
	
	fclose(arq);
	
return 0;	
}

//int posicao(int pos){
//	return (pos -1) * sizeof(func);
//}
