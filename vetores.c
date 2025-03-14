#include <stdio.h>
#include <locale.h>
#define TAM 4

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float notas[TAM], media = 0;
	int i;
	
	printf("Tamanho do vetor notas: %d\n\n", sizeof(notas));
	
	for(i = 0; i < TAM; i++){
		printf("Digite a nota %d: ", i+1);
		scanf("%f", &notas[i]);
		media += notas[i];
	}
	
	media /= TAM;
	
	printf("\n");
	
	for(i = 0; i < TAM; i++){
		printf("Nota %d: %.1f\t %d\n", i+1, notas[i], &notas[i]);
	}	
	
		printf("Média final: %.1f", media);
	
return 0;	
}
