#include <stdio.h>
#include <locale.h>
#define LIN 50
#define COL 50

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, soma = 0;
	int matriz[LIN][COL];
							
	for (i = 0; i < LIN; i++){
		for (j = 0; j < COL; j++){
			matriz[i][j] = i+j;
		}
	}
	
	printf("\n");
							
	for (i = 0; i < LIN; i++){
		for (j = 0; j < COL; j++){
			if (j != i && 49 - i != j ){
               soma += matriz[i][j];
			}
			else{}
		}
	}
	
	printf("\nSoma da matriz: %d", soma);

return 0;	
}
