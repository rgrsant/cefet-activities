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
 		printf("Nome do funcionário: ");
 		scanf("%s", &func[i]); 
 		printf("Função do funcionário: ");
 		scanf("%s", &funcao[i]);
		printf("Salário do funcionário: ");
		scanf("%f", &salario[i]);	 	
 		}
 	}
 	
 	fclose(arq);
 return 0;
}
