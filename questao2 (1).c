#include <stdio.h>
#include <stdlib.h>

int quad(int x, int y) {
	if (y == 1) 
	return x;
	else 
	return (x*quad(x, y-1)); 
}

int main() {
	int x, y;
	
	printf("\nDigite a base X: ");
	scanf("%d", &x);
	
	printf("Digite a potencia Y: ");
	scanf("%d", &y);
	
	printf("\nResultado: %d\n\n", quad(x, y));
	
	return 0;
}
