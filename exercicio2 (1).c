#include <stdio.h> 
#include <locale.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
 	int i, n; 
 	int *v, *v2, *v3; 
 	
 	/* leitura do número de valores */ 
 	printf("Tamanho dos vetores: ");
 	scanf("%d", &n); 
 	
 	/* alocação dinâmica */ 
 	v = (float*) malloc(n*sizeof(float)); 
 	v2 = (float*) malloc(n*sizeof(float)); 
 	v3 = (float*) malloc(n*sizeof(float)); 
 	
 	if (v == NULL){ 
	printf("Memória insuficiente");
	
return 1; 
} 
 
 /* leitura dos valores */ 
 
 	for (i = 0; i < n; i++){
 	printf("Digite um número par: ");
 	scanf("%d", &v[i]); 
 	if(v[i] % 2 != 0){
 		break;
	}

	printf("Digite um número impar: ");
 	scanf("%d", &v2[i]); 
 	if(v2[i] % 2 == 0){
 		break;
	}
 	
 	v3[i] = v[i] + v2[i];
 	
 	printf("Vetor C: %d = %d + %d\n\n", v3[i], v[i], v2[i]);
	} 		
 
 /* libera memória */ 
 	free(v); 
 return 0; 
} 
