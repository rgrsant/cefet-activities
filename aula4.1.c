#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char opc;
	int x, y;
	
	printf("Menu\n");
	printf("A - Adição\n");
	printf("S - Subtrair\n");
	printf("M - Multiplicar\n");
	printf("D - Dividir\n\n");
	printf("Escolha uma opção: ");	
	opc = getchar();
	
	switch(opc) {
		case 'A':
		case 'a': { //opc == A, a
			printf("\nDigite um número inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro número inteiro: ");	
			scanf("%d", &y);	

			printf("\nA soma de %d + %d é %d\n", x, y, x + y);
		break;
	}
		case 'S':
		case 's': { //opc == S, s
			printf("\nDigite um número inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro número inteiro: ");	
			scanf("%d", &y);	

			printf("\nA subtração de %d - %d é %d\n", x, y, x - y);
		break;
	}
		case 'M':
		case 'm': { //opc == M, m
			printf("\nDigite um número inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro número inteiro: ");	
			scanf("%d", &y);	

			printf("\nA multiplicação de %d x %d é %d\n", x, y, x * y);
		break;
	}
		case 'D':
		case 'd': { //opc == D, d
			printf("\nDigite um número inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro número inteiro: ");	
			scanf("%d", &y);	
			
			if (y == 0){
				printf("Não é possível dividir por zero.");
			}

			printf("\nA divisão de %d / %d = %d\n", x, y, x / y);
		break;
	}
		default: printf("\nOpção inválida.\n"); break; //opc == número inválido
	}
return 0;
}
