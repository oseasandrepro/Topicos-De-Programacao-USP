#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) (((a) > (b)) ? (a) : (b))

int maxValueInArray(int n, int array[])
{
    if( n == 1)
    {
        return array[0];
    }
    else if(n>1)
    {
        int aux = maxValueInArray(n-1, ++array);
        return MAX(array[0],  aux);
    }
}

int main(void)
{
    int n;
    int *array;

    scanf("%d", &n);

    array = (int*)malloc(n * sizeof(int));

    for(int i = 0; i<n; i++)
        scanf("%d", &array[i]);

    printf("%d", maxValueInArray(n, array) );

    free(array);
}