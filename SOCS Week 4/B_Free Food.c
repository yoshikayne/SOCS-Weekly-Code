#include <stdio.h>

int main() {
    int cases;
    
    scanf("%d", &cases); getchar();

    int menu[100];
    int money[100000];
    int prices[100][1000];

    for (int i = 0; i < cases; i++) {
        scanf("%d %d", &menu[i], &money[i]); getchar();
        for (int j = 0; j < menu[i]; j++) {
            scanf("%d", &prices[i][j]); getchar();
        }
    }

    for (int i = 0; i < cases; i++) {
        int total = 0;
        for (int j = 0; j < menu[i]; j++) {
            total += prices[i][j];
        }

        if (money[i] < total) {
            printf("Case #%d: Wash dishes\n", i + 1);
        } else {
            printf("Case #%d: No worries\n", i + 1);
        }
    }

    return 0;
}