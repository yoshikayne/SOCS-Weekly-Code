#include <stdio.h>
#include <stdlib.h>

#define MAX_N 50

int callCount = 0;

long long int recursion(int n) {
    // base cases
    if(n == 0 || n == 1) {
        return n + 1;
    }

    // check if n is divisible by 3, increments callCount
    if(n % 3 == 0) {
        callCount++;
    }

    // check if n is divisible by 5
    if(n % 5 == 0) {
        return n * 2;
    }

    return recursion(n - 1) + n + recursion(n - 2) + (n - 2);
}

int main() {
    int cases; scanf("%d", &cases); getchar();

    for(int caseNum = 1; caseNum <= cases; caseNum++) {
        int nums; scanf("%d", &nums); getchar();

        callCount = 0;

        int result = recursion(nums);

        printf("Case #%d: %d %d\n", caseNum, result, callCount);
    }

    return 0;
}