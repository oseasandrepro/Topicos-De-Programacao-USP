#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 150000

int n;
int array[MAX_SIZE];

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int menor = i; // Índice do menor elemento
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[menor]) {
                menor = j; // Atualiza o índice do menor elemento
            }
        }
        // Troca o menor elemento com o elemento atual
        int temp = arr[menor];
        arr[menor] = arr[i];
        arr[i] = temp;
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
    selectionSort(array, n);
    //printf("Array ordenado com Selection Sort: ");
    //printArray(array, n);

    return 0;
}