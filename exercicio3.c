#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, num2;
	
	printf("Digite o primeiro número:");
	scanf("%d", &num);
	printf("\nDigite o segundo número:");
	scanf("%d", &num2);
	
	printf("\n\nA soma desses valores é %d", num + num2);
	printf("\nA subtração desses valores é %d", num - num2);	
	printf("\nA multiplicação desses valores é %d", num * num2);	
	printf("\nA divisão entre esse valores é %d", num / num2);

return 0;
}		
