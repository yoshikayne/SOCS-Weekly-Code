#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void timeConvert(char *time_str, char *converted_time) {
    int hour, minute;
    sscanf(time_str, "%d:%d", &hour, &minute);
    
    hour -= 1;
    
    if (hour < 0) {
        hour = 23;
    }

    sprintf(converted_time, "%02d:%02d", hour, minute);
}

int main() {
    char input[5][100];
    char course_code[11];
    char start_time[6], end_time[6];
    char new_start_time[6], new_end_time[6];

    for (int i = 0; i < 5; i++) {
        fgets(input[i], sizeof(input[i]), stdin);
    }

    for (int i = 0; i < 5; i++) {
        sscanf(input[i], "%10s %5s-%5s", course_code, start_time, end_time);

        timeConvert(start_time, new_start_time);
        timeConvert(end_time, new_end_time);

        printf("%s %s-%s\n", course_code, new_start_time, new_end_time);
    }

    return 0;

}