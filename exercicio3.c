#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, num2;
	
	printf("Digite o primeiro n�mero:");
	scanf("%d", &num);
	printf("\nDigite o segundo n�mero:");
	scanf("%d", &num2);
	
	printf("\n\nA soma desses valores � %d", num + num2);
	printf("\nA subtra��o desses valores � %d", num - num2);	
	printf("\nA multiplica��o desses valores � %d", num * num2);	
	printf("\nA divis�o entre esse valores � %d", num / num2);

return 0;
}		
