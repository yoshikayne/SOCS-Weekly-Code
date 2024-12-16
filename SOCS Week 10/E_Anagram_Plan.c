#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPHABET_SIZE 26

void countFrequencies(const char *str, int *freq) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            freq[str[i] - 'A']++;
        }
    }
}

int calculateDeletions(int *freq1, int *freq2) {
    int deletions = 0;
    for(int i = 0; i < ALPHABET_SIZE; i++) {
        deletions += abs(freq1[i] - freq2[i]);
    }
    return deletions;
}

int main() {
    int cases; scanf("%d", &cases); getchar();

    for(int caseNum = 1; caseNum <= cases; caseNum++) {
        char str1[256], str2[256];
        scanf("%s", str1);
        scanf("%s", str2);

        int freq1[ALPHABET_SIZE] = {0};
        int freq2[ALPHABET_SIZE] = {0};

        countFrequencies(str1, freq1);
        countFrequencies(str2, freq2);

        int deletions = calculateDeletions(freq1, freq2);

        int totalLength = strlen(str1) + strlen(str2);
        if(deletions == totalLength) {
            printf("Test %d: Anagram not found!\n", caseNum);
        } else {
            printf("Test %d: %d\n", caseNum, deletions);
        }
    }

    return 0;
}