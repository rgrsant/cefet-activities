#include <stdio.h>
#include <locale.h>

/*M�dia aritm�tica*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c; //Declara��o de vari�veis
	float media;
	
	//Leitura dos dados
	printf("Digite o primeiro n�mero:");
	scanf("%d", &a);
	printf("Digite o segundo n�mero:");
	scanf("%d", &b);
	printf("Digite o terceiro n�mero:");
	scanf("%d", &c);
	
	media = (a + b + c)/3.0;
	//media = (float)(a + b + c)/3;
	
	printf("M�dia: %f\n", media);
return 0;
}
