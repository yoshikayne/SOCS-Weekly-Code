#include <stdio.h>

#define MOD 1000000007
#define MAX_N 100

unsigned long long fact[MAX_N + 1];

unsigned long long  factR(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }

    if(fact[n] != 0) {
        return fact[n];
    }

    fact[n] = (n * factR(n - 1)) % MOD;
    return fact[n];
}

int main() {
    int cases;
    scanf("%d", &cases);

    for(int i = 0; i <= MAX_N; i++) {
        fact[i] = 0;
    }

    fact[0] = 1;

    for(int caseNum = 1; caseNum <= cases; caseNum++) {
        int nums;
        scanf("%d", &nums);

        unsigned long long result = 1;
        for(int i = 1; i <= nums; i++) {
            int x;
            scanf("%d", &x);
            result = (result * factR(x)) % MOD;
        }
        printf("Case #%d: %llu\n", caseNum, result);
    }

    return 0;
}