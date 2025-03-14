#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char s[20];
	char *ptr = s;
	
	printf("Digite uma frase: ");
	gets(s);
	
	if(*ptr == '\0')
	return 0;
	
	while(*ptr != '\0')
		putchar(*ptr++);
	
	while(ptr >= s)
		putchar(*ptr--);
		
	return 0;
}
	
	
	
