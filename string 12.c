#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome_m[50];
	int valor, valor_desc, valor_vista;
	
	printf("Nome da mercadoria: ");
	gets(nome_m);
	printf("Valor da mercadoria: ");
	scanf("%d", &valor);
	
	printf("\n\n");

	valor_desc = valor * 0.1;
	valor_vista = valor - valor_desc;
	
	printf("Nome da mercadoria: %s\n", nome_m);
	printf("Valor total: %d\n", valor);
	printf("Valor descontado: %d\n", valor_desc);
	printf("Valor do pagamento à vista: %d\n", valor_vista);
	
return 0;
}
