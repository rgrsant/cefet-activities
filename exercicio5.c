#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, num2, num3, media;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &num);
	printf("\nDigite o segundo n�mero: ");
	scanf("%d", &num2);
	printf("\nDigite o terceiro n�mero:");
	scanf("%d", &num3);	
	
	media = (num + num2 + num3)/3;
	
	printf("\n\nA m�dia desses tr�s valores � %d", media);	

return 0;
}	
