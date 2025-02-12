#include<stdio.h>
#include<stdlib.h>

int soma_imprime_impares(int n)
{
    if(n==0){
        printf("%d %d\n", n, 1);
        return 1;
    }else{
        int soma = 0;
        soma = (2*n+1) + soma_imprime_impares(n-1);
        printf("%d %d\n", n, soma);
        return soma;
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    
    soma_imprime_impares(n);

    return 0;
}