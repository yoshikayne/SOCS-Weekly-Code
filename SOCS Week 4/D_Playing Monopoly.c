#include <stdio.h>

int main() {
    unsigned int dice;
    scanf("%u", &dice);

    unsigned int position = 0;

    for (int i = 0; i < dice; i++) {
        unsigned int roll;
        scanf("%u", &roll);
        position += roll;

        if (position == 30) {
            position = 10;
        } else if (position == 12) {
            position = 28;
        } else if (position == 35) {
            position = 7;
        }

        if (position >= 40) {
            position -= 40;
        }
    }

    printf("%u\n", position);
    return 0;
}