#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int i;
	
	printf("Eu preciso jogar ");
	for(i = 1; i <= 2076; i += 1){
	printf("Cyberpunk %d, ", i);
	}
	printf(" antes de jogar o Cyberpunk 2077?");
		
return 0;
}

