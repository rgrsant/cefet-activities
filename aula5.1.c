#include <stdio.h>
#include <locale.h>

#define DIM 5
#define PI 3.14592
#define LIN 4
#define COL 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	for(i = 1; i <= DIM; i += 1){
		if (i % 2 == 0){
			continue;
		}
	printf("%d\n", i);
	}
	
	i = 1;
	while (i <= DIM){
	printf("%d\n", i);
	i++;
	}
	
	char resp;
	
	printf("Forneça S para Sim e N para Não: \n");
	scanf("%c", &resp);
	
	while (resp == 'S' || resp == 's'){
		printf("Olá \n");
		scanf("%c", &resp);
				
	}
	
	int opc;
	
	do{	
	
		printf("Menu\n");
		printf("1 - Adição\n");
		printf("2 - Subtrair\n");
		printf("3 - Multiplicar\n");
		printf("4 - Dividir\n\n");
		printf("5 - Sair\n");
		
		printf("Escolha uma opção: ");
		scanf("%d", &opc);	
		
		if((opc < 1 || opc > 5)){
			printf("A opção digitada é inválida. \n");
		}
		else{
			printf("Executando. \n");
		}
	
	} while(1);
	
	
	
	/*
	estruturas de repetição
	for, while e do while
	
	for(){
	instruções que se repetem
	}
	
	for(inicialização; condição; incremento/decremento;){
	instruções que se repetem
	}
	
	for(;;){
	}
	
	inicialização
	while (condição)
	{
	instrução
	atualização
	}
	
	do{
	instrução
	} while (condição);
	
	*/
	
	/*
	int i;
	for(i = 0; i <= 50; i += 5;){ i => 5
	printf("%d\t ", i);
	}
	
	incremento
	i++ pós => i = i + 1 => i += 1
	++i pré => i = i + 1
	
	decremento
	i-- pós => i = i - 1 => i -= 1
	--i pré => i = i - 1
	
	int a, b, c;
	
	b = 5;
	a = b++; a vale 5 e b vale 6
	c = ++a; c vale 6 e a vale 6
	*/
	
	
return 0;
}
