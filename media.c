#include <stdio.h>
#include <locale.h>

//Escreva um programa que calcule a m�dia dos n�meros digitados pelo usu�rio, se eles forem pares. Termine a leitura se o usu�rio digitar zero (0).

int main() {
	setlocale(LC_ALL, "Portuguese");
	int valor_lido, cont_pares=0;
	float media, soma=0;
		
	printf ("Digite um n�mero: ");
	scanf ("%d", &valor_lido);
	
	while (valor_lido != 0){
		if (valor_lido%2 ==0){
			soma = soma + valor_lido; //acumulando em soma
			cont_pares = cont_pares + 1; //cont_pares++; contabilizando
		}
		printf ("Digite um n�mero: ");
		scanf ("%d", &valor_lido);
	}
	
	if(cont_pares>0)
		media = soma/cont_pares;
	else
		media = 0;
	printf ("Resultado = %f\n", media);

	return 0;
}