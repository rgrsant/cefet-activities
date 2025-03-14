#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 3

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, soma = 0;
	int matriz[LIN][COL];
							
	for (i = 0; i < LIN; i++){
		for (j = 0; j < COL; j++){
			printf("Matriz [%d][%d] ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n");
							
	for (i = 0; i < LIN; i++){
		for (j = 0; j < COL; j++){
			printf("Matriz [%d][%d]: %d \n", i, j, matriz[i][j]);
			soma += matriz[i][j];
		}
	}
	printf("\nSoma da matriz: %d", soma);

return 0;	
}
