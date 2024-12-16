#include <stdio.h>

int main() {
    int cases;
    scanf("%d", &cases);
    
    for (int i = 1; i <= cases; i++) {
        int numbers;
        scanf("%d", &numbers);

        long int nums[1000];
        for (int j = 1; j <= numbers; j++) {
            scanf("%ld", &nums[j]);
        }

        int bibi, lili;
        scanf("%d %d", &bibi, &lili);

        if(nums[bibi] < nums[lili]) {
            printf("Case #%d : Lili\n", i);
        } else if (nums[bibi] > nums[lili]) {
            printf("Case #%d : Bibi\n", i);
        } else {
            printf("Case #%d : Draw\n", i);
        }
    }

    return 0;
}