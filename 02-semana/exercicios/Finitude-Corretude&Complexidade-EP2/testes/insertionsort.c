#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 150000

int n;
int array[MAX_SIZE];

void insertionSort(int n, int A[]) {
    int i, j, v;

    for (i = 1; i < n; i++) { // Começamos do índice 1 (equivalente a 2 no pseudo-código).
        v = A[i];
        j = i;

        // Desloca os elementos maiores que v para a direita.
        while (j > 0 && v < A[j - 1]) {
            A[j] = A[j - 1];
            j = j - 1;
        }

        A[j] = v; // Insere v na posição correta.
    }
}

void readArray(){
    int index = 0;
    int input = INT_MAX;
    while (input != EOF)
    {
        scanf("%d", &input);
        if( input != EOF){
            array[index] = input;
            n = n + 1;
        }
        index = index + 1; 
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) 
{
    readArray();
    //printf("Array original: ", n);
    //printArray(array, n);
    insertionSort(n, array);
    //printf("Array ordenado com Selection Sort: ");
    //printArray(array, n);

    return 0;
}