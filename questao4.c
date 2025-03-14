#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, imc;
	
	printf("Peso: ");
	scanf("%f", &peso);
	printf("Altura (em metros): ");
	scanf("%f", &altura);
	
	imc = peso/(altura * altura);
	printf("Seu IMC: %f\n", imc);
	
	if (imc >= 40){
		printf("Obesidade III (Mórbida)\n");
	}
	else if (imc >= 35){
		printf("Obesidade II (Severa)\n");
	}
	else if (imc >= 30){
		printf("Obesidade I\n");
	}
	else if (imc >= 25){
		printf("Acima do peso\n");
	}
	else if (imc >= 18,5){
		printf("Peso normal\n");
	}
	else if (imc >= 17){
		printf("Abaixo do peso\n");
	}
	else {
		printf("Muito abaixo do peso");
	}
	
	
	
	
return 0;
}

