#include <stdio.h>

int main(){
	int num; scanf("%d", &num); getchar();
	int x, y;
	
	if(num % 2 == 0) {
		x = num / 2;
		y = x;
	} else {
		x = (num - 1) / 2;
		y = x + 1;
	}

	printf("%d = %d + %d\n", num, x, y);
	return 0;
}