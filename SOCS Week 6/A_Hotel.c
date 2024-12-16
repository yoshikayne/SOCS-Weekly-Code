#include <stdio.h>

int main(){
    int cases;
    scanf("%d", &cases);
    int rooms[cases];
    int guest = 0;

    for(int i = 0; i < cases; i++) {
        scanf("%d", &rooms[i]);
    }

    for(int i = 0; i < cases; i++) {
        int room = rooms[i];
        int terisi = 0;
        for(int j = 0; j < i; j++) {
            if(rooms[j] == room) {
                terisi = 1;
            }
        }
        
        if(terisi == 0) {
        guest++;
        }
    }
    
    printf("%d\n", guest);

    return 0;
}