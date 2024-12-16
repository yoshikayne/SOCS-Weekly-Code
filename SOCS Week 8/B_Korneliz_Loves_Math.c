#include <stdio.h>
#include <stdbool.h>

void swapCompare(int arr[], int a, int n) {
    int temp;
    if(a < n) {
        if(arr[n - 1] > arr[n]) {
            temp = arr[n];
            arr[n] = arr[n-1];
            arr[n - 1] = temp;
        }
        swapCompare(arr, a, n-1);
    }
}

void bubbleSort(int arr[], int a, int n) {
    if(a > n) {
        swapCompare(arr, a, n);
        bubbleSort(arr, a + 1, n);
    }
}

int main() {

    return 0;
}