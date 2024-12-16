#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rearrangeWords(char *word) {
    int len = strlen(word);

    for(int i = 0; i < len - 1; i++) {
        for(int j = i + 1; j < len; j++) {
            if(word[i] < word[j]) {
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
}

int main() {
    char words[256]; fgets(words, sizeof(words), stdin); words[strcspn(words, "\n")] = 0; printf("\n");
    char wordToRearrange[256]; fgets(wordToRearrange, sizeof(wordToRearrange), stdin); wordToRearrange[strcspn(wordToRearrange, "\n")] = 0;

    char *token = strtok(words, " ");
    while(token != NULL) {
        if(strcmp(token, wordToRearrange) == 0) {
            rearrangeWords(token);
        }
        printf("%s ", token);
        token = strtok(NULL, " ");
    }

    printf("\n");

    return 0;
}