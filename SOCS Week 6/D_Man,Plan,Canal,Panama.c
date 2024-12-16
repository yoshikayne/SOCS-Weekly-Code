#include <stdio.h>
#include <string.h>

int main() {
    int lines;
    scanf("%d", &lines);
    char words[1001];
    char reversedWords[1001];

    for(int i = 0; i < lines; i++) {
        scanf("%s", words[i]);
    }

    for(int i = 0, j = strlen(words) - 1; i < j; i++, j--) {
        reversedWords = words[i];
        words[i] = words[j];
        words[j] = reversedWords;
    }

    printf("%s", reversedWords);
    return 0;
}