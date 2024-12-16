#include <stdio.h>

int main() {
    int staircases;
    scanf("%d", &staircases);

    if(staircases == 1) {
        printf("1\n");
        return 0;
    } else if(staircases == 2) {
        printf("2\n");
        return 0;
    }

    int ways[staircases + 1];
    ways[1] = 1;
    ways[2] = 2;

    for(int i = 3; i <= staircases; i++) {
        ways[i] = ways[i - 1] + ways[i - 2];
    }

    printf("%d\n", ways[staircases]);

    return 0;
}