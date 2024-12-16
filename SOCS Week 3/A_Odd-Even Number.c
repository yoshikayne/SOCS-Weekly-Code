#include <stdio.h>

int main() {
    long int n;
    scanf("%ld", &n); getchar();

    if (n % 2 == 0) {
        printf("EVEN\n");
    } else if (n % 2 == 1) {
        printf("ODD\n");
    }
    return 0;
}