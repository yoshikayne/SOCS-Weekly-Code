#include <stdio.h>

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findGcd(int arr[], int n) {
    int result = arr[0];
    for(int i = 1 ; i < n; i++) {
        result = gcd(result, arr[i]);
        if(result == 1) {
            return 1;
        }
    }
    return result;
}

int main() {
    int cases;
    scanf("%d", &cases);
    
    for(int caseNum = 1; caseNum <= cases; caseNum++) {
        int num;
        scanf("%d", &num);

        int arr[num];
        for(int j = 0; j < num; j++) {
            scanf("%d", &arr[j]);
        }

        int resultGcd = findGcd(arr, num);

        printf("Case #%d: %d\n", caseNum, resultGcd);
    }
    return 0;
}