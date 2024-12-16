#include <stdio.h>
#include <stdbool.h>

int main() {
    int cases;
    scanf("%d", &cases);

    for(int caseNum = 1; caseNum <= cases; caseNum++) {
        int nums;
        scanf("%d", &nums);

        int arr[nums];
        for(int i = 0; i < nums; i++) {
            scanf("%d", &arr[i]);
        }

        bool alrExists[201] = {false};
        for(int i = 0; i < nums; i++) {
            alrExists[arr[i]] = true;
        }

        bool sumsFound[201] = {false};
        int coolFactor = 0;

        for(int i = 0; i < nums; i++) {
            for(int j = i + 1; j < nums; j++) {
                int sum = arr[i] + arr[j];

                if(sum <= 200 && alrExists[sum] && !sumsFound[sum]) {
                    coolFactor++;
                    sumsFound[sum] = true;
                }
            }
        }

        printf("Case #%d: %d\n", caseNum, coolFactor);
    }

    return 0;
}