#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char opc;
	int x, y;
	
	printf("Menu\n");
	printf("A - Adi��o\n");
	printf("S - Subtrair\n");
	printf("M - Multiplicar\n");
	printf("D - Dividir\n\n");
	printf("Escolha uma op��o: ");	
	opc = getchar();
	
	switch(opc) {
		case 'A':
		case 'a': { //opc == A, a
			printf("\nDigite um n�mero inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro n�mero inteiro: ");	
			scanf("%d", &y);	

			printf("\nA soma de %d + %d � %d\n", x, y, x + y);
		break;
	}
		case 'S':
		case 's': { //opc == S, s
			printf("\nDigite um n�mero inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro n�mero inteiro: ");	
			scanf("%d", &y);	

			printf("\nA subtra��o de %d - %d � %d\n", x, y, x - y);
		break;
	}
		case 'M':
		case 'm': { //opc == M, m
			printf("\nDigite um n�mero inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro n�mero inteiro: ");	
			scanf("%d", &y);	

			printf("\nA multiplica��o de %d x %d � %d\n", x, y, x * y);
		break;
	}
		case 'D':
		case 'd': { //opc == D, d
			printf("\nDigite um n�mero inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro n�mero inteiro: ");	
			scanf("%d", &y);	
			
			if (y == 0){
				printf("N�o � poss�vel dividir por zero.");
			}

			printf("\nA divis�o de %d / %d = %d\n", x, y, x / y);
		break;
	}
		default: printf("\nOp��o inv�lida.\n"); break; //opc == n�mero inv�lido
	}
return 0;
}
