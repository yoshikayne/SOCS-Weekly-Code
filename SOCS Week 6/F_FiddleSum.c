#include <stdio.h>

int main() {
    int lines;
    scanf("%d", &lines);
    int nums[lines];

    for(int i = 0; i < lines; i++) {
        scanf("%d", &nums[i]);
    }

    int min = nums[0];
    int max = nums[0];

    for(int i = 1; i < lines; i++) {
        if(nums[i] < min) {
            min = nums[i];
        }
        if(nums[i] > max) {
            max = nums[i];
        }
    }
    int sum = 0;
    for(int i = 0; i < lines; i++) {
        if(nums[i] != min && nums[i] != max) {
            sum += nums[i];
        }
    }

    printf("FiddleSum: %d\n", sum);
    return 0;
}