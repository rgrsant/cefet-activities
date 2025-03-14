#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
    int opc, opc2, n1, n2, resultado, resto;
    float resultado2, n3, n4;
    
    
    
    while(opc != 9){
    	
    printf("\t------------");
    printf("\tCalculadora");
    printf("\t------------");
    printf("\n\t[01] - Soma;\n");
    printf("\t[02] - Subtração;\n");
    printf("\t[03] - Multiplicação;\n");
    printf("\t[04] - Divisão inteira;\n");
    printf("\t[05] - Divisão racional;\n");
    printf("\t[06] - Porcentagem;\n");
    printf("\t[07] - Potenciação;\n");
    printf("\t[08] - Média simples;\n");
    printf("\t[09] - Sair;\n\n");
    printf("Qual das opções acima você deseja realizar? ");
    scanf("%d", &opc);
    
    switch (opc){
    	
    	case 1:
    		do{
    			printf("\t-----( SOMA )-----");
    			printf("\n\n Digite o primeiro valor: ");
    			scanf("%d", &n1);
    			printf("\n\n Digite o segundo valor: ");
    			scanf("%d", &n2);
    			resultado = n1 + n2;
    			printf("\n\n A soma entre %d e %d é igual a %d", n1, n2, resultado);
    			printf("\n\n-----------------------------------------------------------");
    			printf("\n [1]- Menu inicial | [2]- Continuar: ");
    			scanf("%d", &opc2);
    	    }while(opc2 != 1);
    	    break;
    	
    	case 2:
    		do{
    			printf("\t-----( SUBTRAÇÃO )-----");
    			printf("\n\n Digite o primeiro valor: ");
    			scanf("%d", &n1);
    			printf("\n\n Digite o segundo valor: ");
    			scanf("%d", &n2);
    			resultado = n1 - n2;
    			printf("\n\n A subtração entre %d e %d é igual a %d", n1, n2, resultado);
    			printf("\n\n-----------------------------------------------------------");
    			printf("\n [1]- Menu inicial | [2]- Continuar: ");
    			scanf("%d", &opc2);
    	    }while(opc2 != 1);
    	    break;
    	
    	case 3:
    		do{
    			printf("\t-----( MULTIPLICAÇÃO )-----");
    			printf("\n\n Digite o primeiro valor: ");
    			scanf("%d", &n1);
    			printf("\n\n Digite o segundo valor: ");
    			scanf("%d", &n2);
    			resultado = n1 * n2;
    			printf("\n\n A multiplicação entre %d e %d é igual a %d", n1, n2, resultado);
    			printf("\n\n-----------------------------------------------------------");
    			printf("\n [1]- Menu inicial | [2]- Continuar: ");
    			scanf("%d", &opc2);
    	    }while(opc2 != 1);
    	    break;
    	    
    	case 4:
    		do{
    			printf("\t-----( DIVISÃO INT. )-----");
    			printf("\n\n Digite o primeiro valor: ");
    			scanf("%d", &n1);
    			printf("\n\n Digite o segundo valor: ");
    			scanf("%d", &n2);
    			resultado = n1 / n2;
    			resto = n1 % n2;
    			printf("\n\n A divisão inteira entre %d e %d é igual a %d e o resto é %d", n1, n2, resultado, resto);
    			printf("\n\n-----------------------------------------------------------");
    			printf("\n [1]- Menu inicial | [2]- Continuar: ");
    			scanf("%d", &opc2);
    	    }while(opc2 != 1);
    	    break;
    	    
    	case 5:
    		do{
    			printf("\t-----( DIVISÃO RAC. )-----");
    			printf("\n\n Digite o primeiro valor: ");
    			scanf("%f", &n3);
    			printf("\n\n Digite o segundo valor: ");
    			scanf("%f", &n4);
    			resultado2 = n3 / n4;
    			printf("\n\n A divisao racional entre %.1f e %.1f é igual a %.1f", n3, n4, resultado2);
    			printf("\n\n-----------------------------------------------------------");
    			printf("\n [1]- Menu inicial | [2]- Continuar: ");
    			scanf("%d", &opc2);
    	    }while(opc2 != 1);
    	    break;
    	
    	case 6:
    		do{
    			printf("\t-----( PORCENTAGEM )-----");
    			printf("\n\n Digite o valor desejado: ");
    			scanf("%f", &n3);
    			printf("\n\n Digite a porcentagem desejada: ");
    			scanf("%f", &n4);
    			resultado2 = n3*n4/100;
    			printf("\n\n %.0f porcento de %.0f é igual a %.2f", n4, n3, resultado2);
    			printf("\n\n-----------------------------------------------------------");
    			printf("\n [1]- Menu inicial | [2]- Continuar: ");
    			scanf("%d", &opc2);
    	    }while(opc2 != 1);
    	    break;
    	
    	case 7:
    		do{
    			printf("\t-----( POTENCIAÇÃO )-----");
    			printf("\n\n Digite o valor desejado: ");
    			scanf("%d", &n1);
    			printf("\n\n Digite a potencia desejada: ");
    			scanf("%d", &n2);
    			resultado = pow( n1, n2);
    			printf("\n\n %d elevado a %d é igual a %d", n1, n2, resultado);
    			printf("\n\n-----------------------------------------------------------");
    			printf("\n [1]- Menu inicial | [2]- Continuar: ");
    			scanf("%d", &opc2);
    	    }while(opc2 != 1);
    	    break;
    	
    	case 8:
    		do{
    			printf("\t-----( MÉDIA SIMP. )-----");
    			printf("\n\n Digite o primeiro valor: ");
    			scanf("%f", &n3);
    			printf("\n\n Digite o segundo valor: ");
    			scanf("%f", &n4);
    			resultado2 = (n3 + n4)/2;
    			printf("\n\n A media simples entre %.0f e %.0f é igual a %.1f", n3, n4, resultado2);
    			printf("\n\n-----------------------------------------------------------");
    			printf("\n [1]- Menu inicial | [2]- Continuar: ");
    			scanf("%d", &opc2);
    	    }while(opc2 != 1);
    	    break;
    	
    	case 9:
    		break;
    	    
    	default: 
    			printf("\nOpção inválida, escolha uma opção válida\n\n");
    			
    	    
    	
	}

    }
    

    return 0;
}
