#include <stdio.h>
#include <locale.h>

int n(int);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, y;
	float divisao;
	
	
		printf("\nDigite um número inteiro: ");
		scanf("%d", &x);		
		
		divisao = n(x);
		
		printf("\nO resultado da série é %.3f\n\n", divisao);

return 0;
}

int n(int x){
	float divisao;
	int numerador, denominador;
	
	numerador = x * 2 + 1;
	denominador = x + 3;
	divisao = numerador / denominador;
	
	return (divisao);
}
    
