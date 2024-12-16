#include <stdio.h>

int main() {
    long long int x, y;
    long long int hasil[4];

    for (int i = 0; i < 4; i++){
    scanf("%d %d", &x, &y); getchar();
    hasil[i] = x * y;
    }
    
    printf("%d\n%d\n%d\n%d\n", hasil[0], hasil[1], hasil[2], hasil[3]);
    return 0;
}