#include <stdio.h>

int main() {
    int x, y, k, t;
    scanf("%d %d %d", &x, &y, &k);
    

    for (t = 1; t <= 100; t++) {
        int p1 = x + t;
        int p2 = y - t;
        int p3 = k;

        if (p1 == p2 && p1 == p3 && p2 == p3) {
            printf("%d\n", t);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}