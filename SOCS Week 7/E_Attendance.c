#include <stdio.h>

int main() {
    int team;
    scanf("%d", &team);

    int shirtNum;
    int teamCount[team + 1];
    int incompleteTeam;

    for(int i = 1; i <= team; i++) {
        teamCount[i] = 0;
    }

    for(int i = 1; i <= team; i++) {
        for(int j = 1; j <= team; j++) {
            scanf("%d", &shirtNum);
            if(shirtNum > 0 && shirtNum <= team) {
                teamCount[shirtNum]++;
            }
        }
    }

    for(int i = 1; i <= team; i++) {
        if(teamCount[i] < team) {
            incompleteTeam++;
        }
    }

    printf("%d\n", incompleteTeam);

    return 0;
}