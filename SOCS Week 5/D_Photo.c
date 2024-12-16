#include <stdio.h>

int main() {
    int cases; scanf("%d", &cases); getchar();
    
    for(int i = 1; i <= cases; i++) {
        int heights, width; scanf("%d %d", &heights, &width);

        for(int j = 1; j <= heights; j++) {
            for(int k = 1; k <= width; k++) {
                if(j == 1 || j == heights || k == 1 || k == width) {
                    printf("#");
                } else {
                        printf(" ");
                    }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}