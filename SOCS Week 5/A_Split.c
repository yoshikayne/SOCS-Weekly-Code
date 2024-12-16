#include <stdio.h>

int splitable(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    if(sum % 2 != 0) {
        return 0;
    }

    int target = sum / 2;
    int possibleNums[target + 1];

    for(int i = 0; i <= target; i++) {
        possibleNums[i] = 0;
    }

    possibleNums[0] = 1;

    for(int i = 0; i < n; i++) {
        for(int j = target; j >= arr[i]; j--) {
            if(possibleNums[j - arr[i]]) {
                possibleNums[j] = 1;
            }
        }
    }

    return possibleNums[target];
}

int main() {
    int cases; scanf("%d", &cases); getchar();

    for(int caseNum = 1; caseNum <= cases; caseNum++) {
        int nums; scanf("%d", &nums);

        int numCases[nums]; 
        for(int j = 0; j < nums; j++) {
            scanf("%d", &numCases[j]);
        }

        if(splitable(numCases, nums)) {
            printf("Case #%d: Yes\n", caseNum);
        } else {
            printf("Case #%d: No\n", caseNum);
        }
    }
    
    return 0;
}