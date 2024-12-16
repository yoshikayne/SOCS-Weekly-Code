#include <stdio.h>

int main() {
    long int x,y;
    scanf("%ld %ld", &x, &y); getchar();

    if (x > 0 && y > 0) {
        printf("duck\n");
    } else if (x < 0 && y > 0) {
        printf("sheep\n");
    } else if (x < 0 && y < 0) {
        printf("cow\n");
    } else if (x > 0 && y < 0) {
        printf("dog\n");
    } else if (x == 0 && y == 0) {
        printf("wrong places\n");
    } else {
        printf("wrong places\n");
    }
    
    return 0;
}