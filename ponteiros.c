#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//valor � a vari�vel que vai ser apontada pelo ponteiro
	int valor = 13;
	
	//declara��o da vari�vel ponteiro
	int *ptr;
	
	//atribuindo o endere�o da vari�vel valor ao ponteiro
	ptr = &valor;
	
	printf("Utilizando ponteiros: \n\n");
	printf("Conte�do da variavel valor: %d\n", valor);
  	printf ("Endere�o da variavel valor: %x \n", &valor);
  	printf ("Conteudo da variavel ponteiro ptr: %x", ptr);
  	
return 0;
}
