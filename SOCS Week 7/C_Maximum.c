#include <stdio.h>

int main() {
    int cases;
    scanf("%d", &cases);

    for(int caseNum = 1; caseNum <= cases; caseNum++) {
        int nums;
        scanf("%d", &nums);

        int max1 = -1000001, max2 = -1000001;
        for(int i = 1; i <= nums; i++) {
            int value;
            scanf("%d", &value);

            if(value > max1) {
                max2 = max1;
                max1 = value;
            } else if(value > max2) {
                max2 = value;
            }
        }

        printf("Case #%d: %d\n", caseNum, max1 + max2);
    }


    return 0;
}