#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor1, valor2; // atribui��o, a vari�vel valor2 recebe o int 4.
	int soma, sub, multi, div;
	
	printf("Digite um n�mero inteiro:\n");
	scanf("%d", &valor1); // &endere�o de
	printf("Digite outro n�mero inteiro:\n");
	scanf("%d", &valor2);
	
	printf("O primeiro valor digitado � %d\n", valor1);
	printf("O segundo valor digitado � %d\n", valor2);

	soma = valor1 + valor2;
	sub = valor1 - valor2;
	multi = valor1 * valor2;
	div = valor1 / valor2;
	
	printf("A soma dos valores � %d\n", soma);
	printf("A subtra��o dos valores � %d\n", sub);
	printf("A multiplica��o dos valores � %d\n", multi);
	printf("A divis�o dos valores � %d\n", div);
	
	printf("%d == %d = %d\n", valor1, valor2, valor1 == valor2);
	printf("%d != %d = %d\n", valor1, valor2, valor1 != valor2);
	printf("%d > %d = %d\n", valor1, valor2, valor1 > valor2);
	printf("%d < %d = %d\n", valor1, valor2, valor1 < valor2);
	
	/* 
	operadores aritm�ticos 
	+ adi��o
	- subtra��o
	* multiplica��o
	/ divis�o
	% resto da divis�o inteira
	
	operadores relacionais
	== igual a
	!= diferente de
	> maior que
	>= maior ou igual que
	< menor que
	<= menor ou igual que
	
	operadores l�gicos
	&& e
	|| ou
	! n�o
	*/
		
	return 0;	
}
