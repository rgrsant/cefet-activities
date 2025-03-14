#include <stdio.h>
#include <locale.h>
#define LIN 25
#define COL 25

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, soma = 0, soma2 = 0;
	int matriz[LIN][COL];
							
	for (i = 0; i < LIN; i++){
		for (j = 0; j < COL; j++){
			matriz[i][j] = i+j;
		}
	}
	
	printf("\n");
							
	for (i = 0; i < LIN; i++){
		for (j = 0; j < COL; j++){
			if (j != i && 24 - i != j ){
               soma += matriz[i][j];
			}
			else{}
		}
	}
	
	for (i = 0; i < LIN; i++){
		for (j = 0; j < COL; j++){
			if (i == j){
               soma2 += matriz[i][j];
			}
			else{}
		}
	}
	
	printf("Soma dos elementos que não estão em diagonais: %d\n", soma);
	printf("Soma dos elementos que está na diagonal direita ou esquerda: %d\n", soma2);
	printf("Diferença entre os dois valores acima: %d\n", soma - soma2);
	
return 0;	
}
