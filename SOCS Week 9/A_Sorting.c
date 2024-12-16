#include <stdio.h>
#include <string.h>

typedef struct {
    char name[51];
    int num;
} Data;

void selSort(Data arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int maxIdx = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j].num > arr[maxIdx].num) {
                maxIdx = j;
            } else if(arr[j].num == arr[maxIdx].num) {
                if(strcmp(arr[j].name, arr[maxIdx].name) < 0) {
                    maxIdx = j;
                }
            }
        }
        
        if(maxIdx != i) {
            Data temp = arr[i];
            arr[i] = arr[maxIdx];
            arr[maxIdx] = temp;
        }
    }
}

int main() {
    int cases; scanf("%d", &cases);

    for(int caseNum = 1; caseNum <= cases; caseNum++) {
        int howMany; scanf("%d", &howMany);

        Data data[howMany];

        for(int i = 0; i < howMany; i++) {
            scanf("%[^#]#%d", data[i].name, &data[i].num);
        }

        selSort(data, howMany);

        printf("Case #%d:", caseNum);
        for(int i = 0; i < howMany; i++) {
            printf("%s - %d", data[i].name, data[i].num);
        }
        printf("\n");
    }

    return 0;
}