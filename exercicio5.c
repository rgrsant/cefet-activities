#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, num2, num3, media;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num);
	printf("\nDigite o segundo número: ");
	scanf("%d", &num2);
	printf("\nDigite o terceiro número:");
	scanf("%d", &num3);	
	
	media = (num + num2 + num3)/3;
	
	printf("\n\nA média desses três valores é %d", media);	

return 0;
}	
