#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, num5;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num);	
	
	num5 = num / 5;
	
	printf("\nA quinta parte deste n�mero � %d", num5);
	
return 0;
}
