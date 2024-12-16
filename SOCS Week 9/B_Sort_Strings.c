#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_N 10000
#define MAX_LEN 101

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void selSort(char *arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIdx = i;

        for(int j = i + 1; j < n; j++) {
            if(strcmp(arr[j], arr[minIdx]) < 0) {
                minIdx = j;
            }
        }

        if(minIdx != i) {
            swap(&arr[i], &arr[minIdx]);
        }
    }
}

int main() {
    int cases; scanf("%d", &cases);

    char *strings[MAX_N];

    for(int i = 0; i < cases; i++) {
        strings[i] = (char *)malloc(MAX_LEN * sizeof(char));
        scanf("%s", strings[i]);
    }

    selSort(strings, cases);

    for(int i = 0; i < cases; i++) {
        printf("%s\n", strings[i]);
        free(strings[i]);
    }

    return 0;
}