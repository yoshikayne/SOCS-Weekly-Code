#include <stdio.h>

int jobonacci(int n) {
    if(n == 0) {
        return 0;
    } else if(n % 2 == 1) {
        return 1; 
    } else {
        return jobonacci(n - 1) + jobonacci(n - 2);
    }
}

int main() {
    int num;
    scanf("%d", &num); 

    printf("%d\n", jobonacci(num));
    return 0;
}