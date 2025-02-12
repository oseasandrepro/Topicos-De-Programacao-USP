#include<stdio.h>
#include<stdlib.h>

int soma_imprime_pares(int n)
{
    if(n==0){
        printf("%d %d\n", n, n);
        return 0;
    }else{
        int soma = 0;
        soma = 2*n + soma_imprime_pares(n-1);
        printf("%d %d\n", n, soma);
        return soma;
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    
    soma_imprime_pares(n);

    return 0;
}