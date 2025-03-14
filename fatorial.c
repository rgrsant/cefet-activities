#include <stdio.h>
#include <locale.h>

int fatorial(int);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Insira um valor: ");
	scanf("%d", &num);
	
	printf("O fatorial de %d é %d\n", num, fatorial(num));
	
return 0;
}

int fatorial(int n){
	if (n == 0 || n == 1){
	return 1;
	}
	else{
	return n * fatorial(n - 1);
	}
}

