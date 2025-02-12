#include<stdio.h>
#include<stdlib.h>

int soma_pares(int n)
{
    if(n==0){
        return 0;
    }else{
        int soma = 0;
        soma = 2*n + soma_pares(n-1);
        return soma;
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    
    printf("%d\n", n);
    printf("%d\n", soma_pares(n));

    return 0;
}