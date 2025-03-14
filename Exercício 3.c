#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
    int n1=1, n2=0, n3, cont, passo;
    printf("Qual posição da série deseja ver? ");
    scanf("%d", &cont);
    printf("0 ");
    while ( passo < cont - 1){
        printf("%d ", n1);
        n3 = n1;
        n1 = n1+n2;
        n2 = n3;
        passo++;
    }
    printf("\n\nFib(%d)= %d", cont, n2);
    return 0;
}
