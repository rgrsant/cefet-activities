#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor1, valor2; // atribuição, a variável valor2 recebe o int 4.
	int soma, sub, multi, div;
	
	printf("Digite um número inteiro:\n");
	scanf("%d", &valor1); // &endereço de
	printf("Digite outro número inteiro:\n");
	scanf("%d", &valor2);
	
	printf("O primeiro valor digitado é %d\n", valor1);
	printf("O segundo valor digitado é %d\n", valor2);

	soma = valor1 + valor2;
	sub = valor1 - valor2;
	multi = valor1 * valor2;
	div = valor1 / valor2;
	
	printf("A soma dos valores é %d\n", soma);
	printf("A subtração dos valores é %d\n", sub);
	printf("A multiplicação dos valores é %d\n", multi);
	printf("A divisão dos valores é %d\n", div);
	
	printf("%d == %d = %d\n", valor1, valor2, valor1 == valor2);
	printf("%d != %d = %d\n", valor1, valor2, valor1 != valor2);
	printf("%d > %d = %d\n", valor1, valor2, valor1 > valor2);
	printf("%d < %d = %d\n", valor1, valor2, valor1 < valor2);
	
	/* 
	operadores aritméticos 
	+ adição
	- subtração
	* multiplicação
	/ divisão
	% resto da divisão inteira
	
	operadores relacionais
	== igual a
	!= diferente de
	> maior que
	>= maior ou igual que
	< menor que
	<= menor ou igual que
	
	operadores lógicos
	&& e
	|| ou
	! não
	*/
		
	return 0;	
}
