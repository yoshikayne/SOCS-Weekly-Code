#include <stdio.h>

int main() {
    int a, b, c;
    int midA, midB, midC;

    scanf("%d", &a); getchar();
    scanf("%d", &b); getchar();
    scanf("%d", &c); getchar();

    midA = (a / 10) % 10;
    midB = (b / 10) % 10;
    midC = (c / 10) % 10;

    printf("%d\n", midA);
    printf("%d\n", midB);
    printf("%d\n", midC);

    return 0;
}