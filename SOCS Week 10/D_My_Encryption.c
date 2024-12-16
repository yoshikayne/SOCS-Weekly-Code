#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 500

void encryptString(const char *input, char *output) {
    for(int i = 0; input[i] != '\0'; i++) {
        char ch = input[i];
        int newIndex;

         if(ch >= 'a' && ch <= 'z') {
            newIndex = (ch - 'a' + 3) % 26;
            output[i] = 'a' + newIndex;
        } else if(ch >= 'A' && ch <= 'Z') {
            newIndex = (ch - 'A' + 3) % 26;
            output[i] = 'A' + newIndex;
        } else if(ch >= '0' && ch <= '9') {
            newIndex = (ch - '0' + 3) % 10;
            output[i] = '0' + newIndex;
        } else {
            output[i] = ch;
        }
    }
    output[strlen(input)] = '\0';
}

int main() {
    int cases; scanf("%d", &cases); getchar();

    for(int caseNum = 1; caseNum <= cases; caseNum++) {
        char input[MAX_LENGTH + 1];
        char output[MAX_LENGTH + 1];

        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        encryptString(input, output);

        printf("Case #%d: %s\n", caseNum, output);
    }

    return 0;
}