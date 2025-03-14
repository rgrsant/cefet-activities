#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, soma, i2, i;
	
	soma = 0;
	i2 = 0;
	
	printf("Digite um valor: ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i += 1){
	i2 = i * i;
	soma = soma + i2;
	}

	printf("%d", &soma);		
	
return 0;
}

