#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int aura;
    char name[256];
} Influencer;

// ascending order comparison
int compareAsc(const void *a, const void *b) {
    Influencer *infA = (Influencer *)a;
    Influencer *infB = (Influencer *)b;
    return infA->aura - infB->aura;
}

// descending order comparison
int compareDesc(const void *a, const void *b) {
    Influencer *infA = (Influencer *)a;
    Influencer *infB = (Influencer *)b;
    return infB->aura - infA->aura;
}

int main() {
    int cases; scanf("%d", &cases);

    Influencer influencers[cases];

    for (int i = 0; i < cases; i++) {
        scanf("%d %s", &influencers[i].aura, influencers[i].name);
    }

    // Sort based on the number of test cases
    if (cases % 2 == 1) {
        // odd number of test cases: sort ascending
        qsort(influencers, cases, sizeof(Influencer), compareAsc);
    } else {
        // even number of test cases: sort descending
        qsort(influencers, cases, sizeof(Influencer), compareDesc);
    }

    for (int i = 0; i < cases; i++) {
        printf("%d %s\n", influencers[i].aura, influencers[i].name);
    }

    return 0;
}