#include<stdio.h>
#include<stdlib.h>

void naturais(int n){
    if( n == 0){
        printf("0 ");
    }else{
        printf("%d ", n);
        naturais(n-1);
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    naturais(n);

    return 0;
}