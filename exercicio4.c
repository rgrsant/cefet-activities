#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número:");
	scanf("%d", &num);
	
	printf("\n\nO antecessor do valor digitado é o %d e o sucessor é o %d", num - 1, num + 1);	

return 0;
}	
