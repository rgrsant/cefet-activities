#include <stdio.h>
#include <locale.h>
#define TAM 4

void le(int *v, int tam);
void imprime(int *v, int tam);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int v[TAM];
	
	le(v, TAM);
	imprime(v, TAM);
	
return 0;
}

void le(int *v, int tam){
	int i;
	for(i = 0; i < tam; i++){
		scanf("%d", (v+i));
	}
}

void imprime(int *v, int tam){
	int i;
	for(i = 0; i < tam; i++){
		printf("%d", *(v+i));
	}
}
