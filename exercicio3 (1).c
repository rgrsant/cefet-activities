#include <stdio.h>
	
int main(){
 	int i;
 	float *salario;
 	char *func, *funcao;
 	
 	FILE *arq;
 	arq = fopen("empresa.txt","w");
 	
 	if (arq == NULL){
 	printf("Erro ao abrir o arquivo!\n");
 	}
 	else{
		for (i = 0; i < 100; i++){
 		printf("Nome do funcion�rio: ");
 		scanf("%s", &func[i]); 
 		printf("Fun��o do funcion�rio: ");
 		scanf("%s", &funcao[i]);
		printf("Sal�rio do funcion�rio: ");
		scanf("%f", &salario[i]);	 	
 		}
 	}
 	
 	fclose(arq);
 return 0;
}
