#include <stdio.h>
#include <locale.h>

//constantes pré-definidas
//typedef e struct
//protótipos das funções

void menu();
void imprime_linha();
int soma(int, int);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opc, x, y;
	
	imprime_linha();
	menu();
	printf("\nEscolha a operação desejada: ");
	scanf("%d", &opc);
	
	switch(opc){
		case 1: { 
			printf("\nDigite um número inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro número inteiro: ");	
			scanf("%d", &y);	

			printf("\nA soma de %d + %d é %d\n\n", x, y, soma(x, y));
		break;
		}
		case 2: printf("\nSubtraindo\n\n"); break;
		case 3: printf("\nMultiplicando\n\n"); break;
		case 4: printf("\nDividindo\n\n"); break;
		case 5: printf("\nPrograma encerrado\n\n"); break;
		default: printf("\nA opção digitada é inválida!\n\n");
	}
	
	imprime_linha();
	printf("O valor da soma é %d\n", soma(57, 10));
	imprime_linha();
	
return 0;
}

// definição das funções

void menu(){
		printf("Menu\n");
		printf("1 - Adição\n");
		printf("2 - Subtrair\n");
		printf("3 - Multiplicar\n");
		printf("4 - Dividir\n\n");
		printf("5 - Sair\n");	
}

void imprime_linha(){
	printf("--------\n");
}

int soma(int n, int m){
	return m + n;
}


/*
Funções:
Definição:
tipo_de_retorno nome_do_retorno(tipo arg1, tipo arg2, tipo argn...)

Exemplo:

printf("O valor da soma é %d", soma(5, 10));

int soma(int m, int n){
return m + n;
}


*/
