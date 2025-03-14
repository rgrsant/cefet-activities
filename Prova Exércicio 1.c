#include <stdio.h>
#include <stdlib.h>

float magico(float x, int n);
float expo(float b, int e); //função exponencial
int fat(int n); //função fatorial

int main(void){
	int n, r;
/*	float x;					falhei em meu propósito :(
	float v;
	
	printf("Digite o valor da base:");
	scanf("%f", &x);
	printf("Digite o valor do expoente:");
	scanf("%f", &v);
	res = expo(x, v);
	printf("O resultado é: %f", res);
	return 0; */
	
	printf("Digite o valor a ser fatorado (O número deve ser positivo):");
	scanf("%d", &n);
	
	if(n>0) {
		fat(n);
		printf("Fatorial: %d", fat(n));
		return 0;
	}
	else{
		printf("O número a ser fatorado deve ser positivo.");
	}
}

/* float expo(float b, int e){ //ativação função exponencial
	float res;
	int i;
	res = b;
	for(i=0; i<(e-1); i++) {
		res *= b;
	}
	return res;
} */

int fat(int n){ //ativação função fatorial
	int i, f = 1;
	for(i=1; i<=n; i++){
		f *= i;
	}
	return f;
}
