#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int id;
    char name[100];
    char *ptr;
    ptr = gets(name);
    scanf("%d", &id);
    int mid = id;

    int lastW = strlen(name)-1;
    name[lastW] = toupper(name[lastW]);
    printf("%c%c", name[0], name[lastW]);
  
    int lastD = id % 10;
    int firstD;
    
    while (id >=10){
        id /= 10;
    }
    firstD = id;
    
    char middleD[20];
    sprintf(middleD, "%d", mid);
    int lengId = strlen(middleD);
    long int middle;
    if (lengId % 2 == 0){
        middle = ((strlen(middleD)-1)/2) + 1;
    } else {
        middle = (strlen(middleD)-1)/2;
    }
    printf("%d%c%d", firstD, middleD[middle], lastD);
   
}