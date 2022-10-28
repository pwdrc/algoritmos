#include <stdio.h>

void insertionMe(int arr[], int size);

int main() {

    int arr[10] = {5, 6, 10, 100, 23, 44, -2, 88, 20, 1};

    insertionMe(arr, 10);

    for(int i = 0; i < 10; i++)
        printf("%d, ", arr[i]);

    return 0;
}

void insertionMe(int arr[], int size) {

    int key, j;
    for(int i = 0; i < size; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}