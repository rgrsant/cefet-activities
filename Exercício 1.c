#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
    int valor, moeda1, moeda5, moeda10, moeda50, moeda100;
    printf("Insira o valor desejado: ");
    scanf("%d", &valor);
    system("cls");
    printf("\n\tVocê precisará das seguintes moedas:\n");

    if ( valor >= 100 ){
         moeda100 = valor/100;
         valor = valor%100;
         printf("\n\t %d moedas de 100;\n", moeda100);
       }
    if ( valor >= 50 ){
        moeda50 = valor/50;
        valor = valor%50;
        printf("\t %d moedas de 50; \n", moeda50);
    }
    if ( valor >= 10){
        moeda10 = valor/10;
        valor = valor%10;
        printf("\t %d moedas de 10; \n", moeda10);
    }
    if ( valor >=5 ){
        moeda5 = valor/5;
        valor = valor%5;
        printf("\t %d moedas de 5;  \n", moeda5);
    }
    if ( valor >=1){
        moeda1 = valor;
        printf("\t %d moedas de 1;  \n\n", moeda1);
    }

    return 0;
}
