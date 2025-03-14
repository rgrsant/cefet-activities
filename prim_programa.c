#include <stdio.h>
#include <locale.h>

/*Média aritmética*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c; //Declaração de variáveis
	float media;
	
	//Leitura dos dados
	printf("Digite o primeiro número:");
	scanf("%d", &a);
	printf("Digite o segundo número:");
	scanf("%d", &b);
	printf("Digite o terceiro número:");
	scanf("%d", &c);
	
	media = (a + b + c)/3.0;
	//media = (float)(a + b + c)/3;
	
	printf("Média: %f\n", media);
return 0;
}
