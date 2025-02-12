#include <stdio.h>
#include <stdlib.h>

void insertionSort(int n, int array[]) {
  int i, j;
  int chave;
  for (j = 1; j < n; j++) {
    chave = array[j];
    i = j - 1;
    while (i >= 0 && array[i] > chave) {
      array[i + 1] = array[i];
      i = i - 1;
    }
    array[i + 1] = chave;
  }
}

void printArry(int n, int array[]) {
  for (int i = 0; i < n; i++) {
    i == (n - 1) ? printf("%d", array[i]) : printf("%d ", array[i]);
  }
}

int main(void) {
  int n;
  int *array;

  scanf("%d", &n);
  array = (int *)malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  insertionSort(array, n);

  printArry(array, n);

  free(array);

  return 0;
}