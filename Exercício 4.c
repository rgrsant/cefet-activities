#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int n = 5;
    int X[n];
    int Y[n];
    int i, j, k, l; //contadores
    int check; //0 para falso e 1 para verdadeiro
    for(i = 0; i < n ; i++)
    {
        printf("Leia o %dº elemento do vetor X: " ,i+1);
        scanf("%d" ,&X[i]);
    }
    for(i = 0; i<n ; i++)
    {
        printf("Leia o %dº elemento do vetor Y: " ,i+1);
        scanf("%d" ,&Y[i]);
    }
    
    int P[n]; //vetor multiplicação
    for(i = 0; i < n ; i++)
    {
        P[i] = X[i]*Y[i];
    }
    
    printf("...Vetor Multiplicação... \n [");
    for(i = 0; i < n ; i++)
    {
        printf("%d", P[i]);
        if (i < (n-1))
        {
            printf(", ");
        }
    }
    
    printf("]\n \n"); //espaçamento entre a impressão dos vetores
    
    int I[10]; //vetor interseção tamanho máximo 10
    k=0;
    for(i = 0; i < n; i++)
    {
        check = 0; //não há elemento igual no vetor
        for(j = 0 ; j < n; j++)
        {   
            if(X[i] == Y[j])
            {
                check = 1;
            }
        }
        
        if(check == 1)
        {
            I[k] = X[i];
            k++;
        }
    }
    
    for(i = 0; i < n; i++)
    {
        check = 0; //não há elemento igual no vetor
        for(j = 0 ; j < n; j++)
        {   
            if(Y[i] == X[j])
            {
                check = 1;
            }
        }
        
        if(check == 1)
        {
            for(l = 0; l < k; l++)
            {
                if(Y[i] == I[l])
                {
                    check = 0;
                }
            }
            
            if(check == 1)
            {
                I[k] = Y[i];
                k++;
            }
        }
    }
    
    printf("...Vetor interseção... \n [");
    for(i = 0; i < k ; i++)
    {
        printf("%d", I[i]);
        if (i < (k-1))
        {
            printf(", ");
        }
    }
    
    printf("]\n \n"); //espaçamento entre a impressão dos vetores
    
    
    int U[10]; //vetor União tamanho máximo 10
    k=0;
    for(i = 0 ; i < n; i++)
    {
        check = 0;
        for(j = 0; j <= k; j++)
        {
            if(X[i] == U[j])
            {
                check = 1;
            }
        }
        
        if(check == 0)
        {
            U[k] = X[i];
            k++;
        }
    }
    
    for(i = 0 ; i < n; i++)
    {
        check = 0;
        for(j = 0; j <= k; j++)
        {
            if(Y[i] == U[j])
            {
                check = 1;
            }
        }
        
        if(check == 0)
        {
            U[k] = Y[i];
            k++;
        }
    }
    
     printf("...Vetor União... \n [");
    for(i = 0; i < k ; i++)
    {
        printf("%d", U[i]);
        if (i < (k-1))
        {
            printf(", ");
        }
    }
    
    printf("]\n \n"); //espaçamento entre a impressão dos vetores
    
    
    
    return 0;
}
