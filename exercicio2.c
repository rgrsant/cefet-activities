#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, num2, num3, numsoma;
	
	printf("Digite o primeiro n�mero:");
	scanf("%d", &num);
	printf("\nDigite o segundo n�mero:");
	scanf("%d", &num2);
	printf("\nDigite o terceiro n�mero:");
	scanf("%d", &num3);
	
	numsoma = num + num2 + num3;
	
	printf("\nA soma desses 3 n�meros � %d", numsoma);
	
return 0;
}
