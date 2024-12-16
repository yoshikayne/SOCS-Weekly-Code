#include <stdio.h>
#include <string.h>

int main() {
	int cases;
    scanf("%d", &cases);

    char cases_count[1000][1000];

    for (int i = 0; i < cases; i++) {
        scanf("%s", cases_count[i]);
    }

    for (int i = 0; i < cases; i++) {
        int remaining = 0;
        
        for (int j = 0; cases_count[i][j] != '\0'; j++) {
            remaining = (remaining * 10 + (cases_count[i][j] - '0')) % 6;
        }

        if (remaining == 0) {
            printf("Case #%d: YES\n", i + 1);
        } else {
            printf("Case #%d: NO\n", i + 1);
        }
    }

    return 0;
}