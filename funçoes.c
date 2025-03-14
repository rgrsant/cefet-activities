//includes 
#include <stdio.h>
#include <locale.h>

//constantes pré-definidas
#define TAM 3
#define DIM 5

//typedef e struct

//protótipo das funções
int soma(int, int);
double pot(double, double);
void nome_fantasia();
void menu_escolha();
void imprime(int);
int maior(int v[], int n);

//ponteiros
int str_len(char *);


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, x, y, vet[DIM] = {-5, 80, 9, 70, -3};
	
	for (i = 0; i < DIM; i++){
		printf("%d\n", vet[i]);
	}
	
	printf("Maior valor no vetor %d\n", maior (vet, DIM));
	
	char nome[10];
	
	nome_fantasia();
	imprime(TAM);
	
	puts("Digite o seu nome: ");
	gets(nome);
	puts(nome);
	
	printf("Tamanho do nome %d\n", str_len(nome));
	
	puts("Digite um valor inteiro: ");
	scanf("%d", &x); //valor 5
	puts("Digite um valor inteiro: ");
	scanf("%d", &y); //valor 4
											//soma (5, 4)
	printf("Soma de %x + %d = %d\n", x, y, soma(x, y));
	nome_fantasia();
	
return 0;	
}

int soma(int m, int n){
	return m + n; //return 5 + 4; int 9
}

double pot(double base, double expoente){
//return double
}

int fatorial(int n){
	if (n == 1){
	return 1;
	}
	else{
	return n * fatorial(n - 1);
	}
}

