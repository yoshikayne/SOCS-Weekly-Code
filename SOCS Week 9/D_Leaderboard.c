#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 21

typedef struct {
    char name[MAX_NAME_LENGTH];
    int score;
} Player;

int compare(const void *a, const void *b) {
    Player *playerA = (Player *)a;
    Player *playerB = (Player *)b;
    return playerB->score - playerA->score;
}

int main() {
    int cases; scanf("%d", &cases); getchar();
    
    Player *players = malloc(sizeof(Player) * cases);
    int playerCount = 0;

    for (int caseNum = 0; caseNum <= cases; caseNum++) {
        char name[MAX_NAME_LENGTH];
        int score;
        scanf("%s %d", name, &score);
        
        // check name already exists in leaderboard
        int found = 0;
        for (int j = 0; j < playerCount; j++) {
            // if name already exists, update score to higher ones
            if (strcmp(players[j].name, name) == 0) {
                players[j].score = score;
                found = 1;
                break;
                }
            }
        
        // if name not found, add new player to leaderboard
        if (!found) {
            strcpy(players[playerCount].name, name);
            players[playerCount].score = score;
            playerCount++;
        }
    }

    // sort leaderboard by score in descending order
    qsort(players, playerCount, sizeof(Player), compare);

    // print leaderboard
    for (int i = 0; i < playerCount; i++) {
        printf("%s [%d]\n", players[i].name, players[i].score);
    }

    return 0;
}