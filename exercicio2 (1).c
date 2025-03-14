#include <stdio.h> 
#include <locale.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
 	int i, n; 
 	int *v, *v2, *v3; 
 	
 	/* leitura do n�mero de valores */ 
 	printf("Tamanho dos vetores: ");
 	scanf("%d", &n); 
 	
 	/* aloca��o din�mica */ 
 	v = (float*) malloc(n*sizeof(float)); 
 	v2 = (float*) malloc(n*sizeof(float)); 
 	v3 = (float*) malloc(n*sizeof(float)); 
 	
 	if (v == NULL){ 
	printf("Mem�ria insuficiente");
	
return 1; 
} 
 
 /* leitura dos valores */ 
 
 	for (i = 0; i < n; i++){
 	printf("Digite um n�mero par: ");
 	scanf("%d", &v[i]); 
 	if(v[i] % 2 != 0){
 		break;
	}

	printf("Digite um n�mero impar: ");
 	scanf("%d", &v2[i]); 
 	if(v2[i] % 2 == 0){
 		break;
	}
 	
 	v3[i] = v[i] + v2[i];
 	
 	printf("Vetor C: %d = %d + %d\n\n", v3[i], v[i], v2[i]);
	} 		
 
 /* libera mem�ria */ 
 	free(v); 
 return 0; 
} 
