#include <stdio.h>

int main() {
    unsigned long long int a, b, c;
    unsigned long long int hasil;

    scanf("%llu %llu %llu", &a, &b, &c); getchar();
    hasil = a * b * c;

    printf("%llu\n", hasil);
    return 0;
}