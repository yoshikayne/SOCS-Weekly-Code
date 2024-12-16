#include <stdio.h>

int main(){
	char input[100];
	unsigned int a, b;
	int hasil[3], i;
	
	for(i = 0; i < 3; i++) {
		fgets(input, sizeof(input), stdin);
		sscanf(input, "%u + %u = ", &a, &b);
		hasil[i] = a + b;
	}
	
	printf("%d\n", hasil[0]);
	printf("%d\n", hasil[1]);
	printf("%d\n", hasil[2]);
	
	return 0;
}