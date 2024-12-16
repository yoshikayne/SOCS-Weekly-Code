#include <stdio.h>
#include <string.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int size) {
    int minIdx;
    for(int i = 0; i < size; i++) {
        minIdx = i;
       
        for(int j = i + 1; j < size; j++) {
            
            if(arr[j]<arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(&arr[i], &arr[minIdx]);
    }
}

int main() {
    int cases;
    scanf("%d", &cases);

    for(int i = 0; i < cases; i++) { 
        int nums;
        scanf("%d", &nums);
        int set[nums];
        double sum = 0;
        for(int j = 0; j < nums; j++) {
            scanf("%d", &set[j]);
            sum += set[j];
        }
        
        double M1 = sum / nums;
        selectionSort(set, nums);

        double M2;
        if(nums % 2 ==  1) {
            M2 = set[nums / 2];
        } else {
            M2 = (set[nums/2 - 1] + set[nums/2]) / 2;
        }
        
        printf("Case #%d:\n", i + 1);
        printf("Mean : %.2lf\n", M1);
        printf("Median : %.2lf\n", M2);
    }

return 0;
}