#include <stdio.h>
#include <conio.h>
#include <locale.h>

void troca(int *ptrx, int *ptry, int *ptrw);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
  	int a, b, c;
  	
  	printf("Digite o primeiro valor: ");
  	scanf("%d", &a);
  
  	printf("Digite o segundo valor: ");
  	scanf("%d", &b);
  	
  	printf("Digite o terceiro valor: ");
  	scanf("%d", &c);
  
  
  printf("Valores digitados: A: %d, B: %d e C: %d\n", a, b, c);
  
  troca(&a, &b, &c);
  
  printf("Valores trocados: A: %d e B: %d e C: %d\n", a, b, c);
  
  return 0;
}

void troca(int *ptrx, int *ptry, int *ptrw)
{
  int x;
  
	x = *ptrw;
  	*ptrw = *ptry;
  	*ptry = *ptrx;
 	*ptrx = x;
  
  return;
}
