#include <stdio.h>
#define tam 400

int main() {
	int i, j, soma=0, mat[tam][tam];
	for (i=0;i<tam;i++){
		for (j=0;j<tam;j++){
			scanf("%d", &mat[i][j]);
		}
	}

	for (i=0;i<tam;i++)
		soma = soma - mat[i][i];
	printf("A soma dos elementos é", soma);
	return 0;
}
