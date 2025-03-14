#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int * aloc_int;
	int tam_int, tam_char;
	char * aloc_char;
	
	printf("Tamanho do vetor de INT: ");
	scanf("%d", &tam_int);
	
	/*
	malloc, calloc e realloc
	free
	*/
	
	aloc_int = (int *) malloc(tam_int * sizeof(int));
	//avaliar se alocou com sucesso!
	if(aloc_int == NULL){
		printf("Erro: Memória insuficiente\n\n");
		exit(1);
	}
	else{
		printf("Memória alocada com sucesso!\n\n");
	}
	
	printf("Tamanho do vetor de CHAR: ");
	scanf("%d", &tam_char);
	
	aloc_char = (char *) malloc(tam_char * sizeof(char));
	if(aloc_char == NULL){
		printf("Erro: Memória insuficiente\n\n");
		exit(1);
	}
	else{
		printf("Memória alocada com sucesso!\n\n");
	}
	
	free(aloc_int);
	free(aloc_char);
	
	/* alocação dinâmica com vetores
	
	int *v; 
   	int n;
   	scanf ("%d", &n);
   	v = malloc (n * sizeof (int));
   	for (int i = 0; i < n; ++i) 
    scanf ("%d", &v[i]);
   	. . . 
   	free (v);
	*/
	
return 0;
}
