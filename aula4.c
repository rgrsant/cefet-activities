#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opc, x, y;
	
	printf("Menu\n");
	printf("1 - Adição\n");
	printf("2 - Subtrair\n");
	printf("3 - Multiplicar\n");
	printf("4 - Dividir\n\n");
	printf("Escolha uma opção: ");
	scanf("%d", &opc);	
	
	
	switch(opc) {
		case 1: { //opc == 1
			printf("\nDigite um número inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro número inteiro: ");	
			scanf("%d", &y);	

			printf("\nA soma de %d + %d é %d\n", x, y, x + y);
		break;
	}
		case 2: { //opc == 2
			printf("\nDigite um número inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro número inteiro: ");	
			scanf("%d", &y);	

			printf("\nA subtração de %d - %d é %d\n", x, y, x - y);
		break;
	}
		case 3: { //opc == 3
			printf("\nDigite um número inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro número inteiro: ");	
			scanf("%d", &y);	

			printf("\nA multiplicação de %d x %d é %d\n", x, y, x * y);
		break;
	}
		case 4: { //opc == 4
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
