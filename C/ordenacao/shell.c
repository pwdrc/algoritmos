#include <stdio.h>

void shellMe(int arr[], int size);

int main() {

    int arr[10] = {5, 6, 10, 100, 23, 44, -2, 88, 20, 1};

    shellMe(arr, 10);

    for(int i = 0; i < 10; i++)
        printf("%d, " arr[i]);

    return 0;
}

void shellMe(int arr[], int size) {

    
}