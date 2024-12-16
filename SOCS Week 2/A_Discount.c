#include <stdio.h>

int main() {
    int A, B;   
    scanf("%d %d", &A, &B); getchar();
    float disc = ((float)(A - B) / A) * 100;
    printf("%.2f%%\n", disc);
    return 0;
}