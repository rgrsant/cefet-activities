#include <stdio.h>
#include <locale.h>

int soma(int, int);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, y, quad;
	
		printf("\nDigite um número inteiro: ");
		scanf("%d", &x);		
		printf("Digite outro número inteiro: ");	
		scanf("%d", &y);
		
		quad = soma(x, y);

		printf("\nO primeiro valor elevado ao segundo é %d\n\n", quad);

return 0;
}

int soma(int x, int y){
	int i, quad;
	
	   for (i = 1; i < y; i++){
     	quad *= x;
		}
		
     	return (quad);
}
     
