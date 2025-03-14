#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float media;
	int idade, peso, valor1, valor2;
	
	printf("Digite a primeira nota:\n");
	scanf("%d", &valor1);
	printf("Digite a segunda nota:\n");
	scanf("%d", &valor2);
	
	media = (valor1 + valor2)/2;
	
	if (media >= 6){
		printf("Aprovado!\n");
	}
	else if (media >= 4){
		printf("Recuperação\n");
	}
	else{
		printf("Reprovado!\n");
	}
	
	printf("Digite a sua idade:\n");
	scanf("%d", &idade);
	printf("Digite o seu peso:\n");
	scanf("%d", &peso);
	
	if ((idade >= 18) && (peso >= 60)){
		printf("Apto!");
	}
	else{
		printf("Inapto!");
	}
	
return 0;
}
