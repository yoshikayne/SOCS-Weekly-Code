#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MOD 24561

int compareChars(const void *a, const void *b) {
    return *(const char *)a - *(const char *)b;
}

int main() {
    int cases; 
    scanf("%d", &cases); getchar();

    long long total = 0;

    for(int caseNum = 1; caseNum <= cases; caseNum++) {
        char str[11]; 
        scanf("%s", str); getchar();

        int len = strlen(str);
        qsort(str, len, sizeof(char), compareChars);

        long long num = 0;
        for(int j = 0; j < len; j++) {
            num = num * 10 + (str[j] - '0');
            if(num >= MOD) {
                num %= MOD;
            }
        }

        total = (total + num) % MOD;
    }

    printf("%lld\n", total);

    return 0;
}