#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 150000

int n;
int array[MAX_SIZE];

void bubbleSort(int arr[], int n) {
    int swapped;
    do {
        swapped = 0;
        for (int j = n-1; j>0; j--) {
            if (arr[j] < arr[j-1]) {
                // Troca os elementos adjacentes
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                swapped = 1; // Marca que houve uma troca
            }
        }
    } while (swapped);
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
    //printf("Array original: ");
    //printArray(array, n);
    bubbleSort(array, n);
    //printf("Array ordenado com Selection Sort: ");
    //printArray(array, n);

    return 0;
}