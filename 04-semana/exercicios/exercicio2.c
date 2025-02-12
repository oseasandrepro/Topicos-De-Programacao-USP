#include<stdio.h>
#include<stdlib.h>

int progressao_naturais(int n){
    if( n == 0){
        return 1;
    }else{
        int soma;
        soma = n + progressao_naturais(n-1);
        return soma;
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", progressao_naturais(n) );

    return 0;
}