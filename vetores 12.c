#include <stdio.h>
#include <locale.h>
#define TAM 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float vetor[TAM];
	int i, x;
	
	for (i = 0; i < TAM; i++){
		printf("Digite o valor %d: ", i+1);
		scanf("%f", &vetor[i]);
	}
	
	printf("\n");

	for (i = 0; i < TAM; i++){		
		for (x = i+1; x < TAM; x++){
		if (vetor[i] == vetor[x]){
			printf("Não são permitidos valores iguais. \n");
			break;
		}
		else{}
		}
		printf("Valor %d: %.1f\n", i+1, vetor[i]);
	}
		
return 0;
}




