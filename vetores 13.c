#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define TAM 10
  
int main(){
	setlocale(LC_ALL, "Portuguese");

  	float conjunto[TAM];
  	double media;
  	double desvioPadrao = 0.0;
  	int i;

  	for(i = 0; i < TAM; i++){
  		printf("Digite o valor %d: ", i+1);
		scanf("%f", &conjunto[i]);
    	media += conjunto[i];
  }
   
	media /= TAM;

  	for(i = 0; i < TAM; i++){
    	desvioPadrao = desvioPadrao + pow(conjunto[i] - media, 2);
  }
 
  	printf("\nDesvio Padr�o: %f", sqrt(desvioPadrao / TAM));
  	printf("\nDesvio Padr�o Populacional: %f", sqrt(desvioPadrao / (TAM - 1))); 
 
  printf("\n\n");
  return 0;
}
