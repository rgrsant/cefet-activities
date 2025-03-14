#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opc, x, y;
	
	printf("Menu\n");
	printf("1 - Adi��o\n");
	printf("2 - Subtrair\n");
	printf("3 - Multiplicar\n");
	printf("4 - Dividir\n\n");
	printf("Escolha uma op��o: ");
	scanf("%d", &opc);	
	
	
	switch(opc) {
		case 1: { //opc == 1
			printf("\nDigite um n�mero inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro n�mero inteiro: ");	
			scanf("%d", &y);	

			printf("\nA soma de %d + %d � %d\n", x, y, x + y);
		break;
	}
		case 2: { //opc == 2
			printf("\nDigite um n�mero inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro n�mero inteiro: ");	
			scanf("%d", &y);	

			printf("\nA subtra��o de %d - %d � %d\n", x, y, x - y);
		break;
	}
		case 3: { //opc == 3
			printf("\nDigite um n�mero inteiro: ");
			scanf("%d", &x);		
			printf("Digite outro n�mero inteiro: ");	
			scanf("%d", &y);	

			printf("\nA multiplica��o de %d x %d � %d\n", x, y, x * y);
		break;
	}
		case 4: { //opc == 4
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
