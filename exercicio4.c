#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero:");
	scanf("%d", &num);
	
	printf("\n\nO antecessor do valor digitado � o %d e o sucessor � o %d", num - 1, num + 1);	

return 0;
}	
