#include <stdio.h>

int fiboCalls = 0;

int fiboCount(int n) {
    fiboCalls++;

    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return fiboCount(n - 1) + fiboCount(n - 2);
    }
}

int main() {
    int cases;
    scanf("%d", &cases);

    for(int caseNum = 1; caseNum <= cases; caseNum++) {
        int nums;
        scanf("%d", &nums);

        fiboCalls = 0;
        fiboCount(nums);

        printf("Case #%d: %d\n", caseNum, fiboCalls);
    }

    return 0;
}