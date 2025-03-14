#include <stdio.h>
#include <locale.h>

//constantes pr�-definidas
//typedef e struct
//prot�tipos das fun��es

void menu();
void imprime_linha();
int soma(int, int);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opc, x, y;
	
	imprime_linha();
	menu();
	printf("\nEscolha a opera��o desejada: ");
	scanf("%d", &opc);
	
	switch(opc){
		case 1: { 
			printf("\nDigite um n�mero inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro n�mero inteiro: ");	
			scanf("%d", &y);	

			printf("\nA soma de %d + %d � %d\n\n", x, y, soma(x, y));
		break;
		}
		case 2: printf("\nSubtraindo\n\n"); break;
		case 3: printf("\nMultiplicando\n\n"); break;
		case 4: printf("\nDividindo\n\n"); break;
		case 5: printf("\nPrograma encerrado\n\n"); break;
		default: printf("\nA op��o digitada � inv�lida!\n\n");
	}
	
	imprime_linha();
	printf("O valor da soma � %d\n", soma(57, 10));
	imprime_linha();
	
return 0;
}

// defini��o das fun��es

void menu(){
		printf("Menu\n");
		printf("1 - Adi��o\n");
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
Fun��es:
Defini��o:
tipo_de_retorno nome_do_retorno(tipo arg1, tipo arg2, tipo argn...)

Exemplo:

printf("O valor da soma � %d", soma(5, 10));

int soma(int m, int n){
return m + n;
}


*/
