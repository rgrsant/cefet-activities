#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//valor é a variável que vai ser apontada pelo ponteiro
	int valor = 13;
	
	//declaração da variável ponteiro
	int *ptr;
	
	//atribuindo o endereço da variável valor ao ponteiro
	ptr = &valor;
	
	printf("Utilizando ponteiros: \n\n");
	printf("Conteúdo da variavel valor: %d\n", valor);
  	printf ("Endereço da variavel valor: %x \n", &valor);
  	printf ("Conteudo da variavel ponteiro ptr: %x", ptr);
  	
return 0;
}
