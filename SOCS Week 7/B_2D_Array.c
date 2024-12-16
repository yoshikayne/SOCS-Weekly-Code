#include <stdio.h>

int main() {
    int row, collumn, query;
    scanf("%d %d %d", &row, &collumn, &query);

    int array[row][collumn];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < collumn; j++) {
            array[i][j] = 0;
        }
    }

    for(int q = 0; q < query; q++) {
        int x, y, a;
        scanf("%d %d %d", &x, &y, &a);
        array[x][y] = a;
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < collumn; j++) {
            printf("%d", array[i][j]);
            if(j < collumn - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}