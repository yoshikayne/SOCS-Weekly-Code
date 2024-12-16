#include <stdio.h>

int main() {
    int cases;
    scanf("%d", &cases);

    int bebe[cases], lili[cases];

    for (int i = 0; i < cases; i++) {
        scanf("%d %d", &bebe[i], &lili[i]);
    }

    for (int i = 0; i < cases; i++) {
        int meet = 0;

        for (int j = 0; lili[i] > 0; j++) {
	    	lili[i] -= 5;
	    	bebe[i] += 4;
	    if (lili[i] == bebe[i]) {
        	meet = lili[i];
        	break;
 	   }
	}

        if (meet != 0) {
            printf("Case #%d: %d\n", i + 1, meet);
        } else {
            printf("Case #%d: Possiblen't\n", i + 1);
        }
    }

    return 0;
}