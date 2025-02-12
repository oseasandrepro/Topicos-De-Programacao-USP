#include <stdlib.h>
#include <stdio.h>

int mdc(int a, int b){
    if(b == 0)
        return a;
    else
        return mdc(b, a % b);
}

int main(void)
{
    int a,b;

    scanf("%d %d", &a, &b);
    int mdc_ab = mdc(a,b);
    if(mdc_ab == 1)
        printf("SIM\n");
    else
        printf("NAO %d\n", mdc_ab);
    
    return 0;
}