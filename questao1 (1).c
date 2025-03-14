#include <stdio.h> 
#include <locale.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
 	int i, n, nx; 
 	int *v, *v2, *v3; 
 	
 	/* leitura do número de valores */ 
 	printf("Tamanho dos vetores A e B: ");
 	scanf("%d", &n); 
 	
 	nx = n * 2;
 	/* alocação dinâmica */
 	
 	v = (float*) malloc(n*sizeof(float)); 
 	v2 = (float*) malloc(n*sizeof(float)); 
 	v3 = (float*) malloc(nx*sizeof(float)); 
 	
 	if (v == NULL){ 
	printf("Memória insuficiente");
	
	return 1; 
	} 
 
 /* leitura dos valores */ 
 	printf("\nTamanho do Vetor A: %d\n\n", n);
 	for (i = 0; i < n; i++){
 	printf("Preencha o vetor A: ");
 	scanf("%d", &v[i]);
 	v3[i] = v[i];
	}  
	
	printf("\nTamanho do Vetor B: %d\n\n", n);
	for (i = 0; i < n; i++){
 	printf("Preencha o vetor B: ");
 	scanf("%d", &v2[i]);
 	v3[i + n] = v2[i];
	}  
	
	printf("\nTamanho do Vetor C: %d\n", nx);
	for (i = 0; i < nx; i++){
		printf("Valor %d: %d\n", i + 1, v3[i]);
	}
	  
 /* libera memória */ 
 	free(v); 
 	free(v2);
 	free(v3);
 	
 return 0; 
} 
