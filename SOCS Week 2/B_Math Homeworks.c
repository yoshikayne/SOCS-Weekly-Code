#include <stdio.h>

int main(){
	char input[100];
	long int a, b, c, d;
	long int hasil[3], i;
	
	
	for (i = 0; i < 3; i++) {
		fgets(input, sizeof(input), stdin);
		sscanf(input, "(%ld + %ld)x(%ld - %ld)", &a, &b, &c, &d);
		hasil[i]= (a + b)*(c - d);
	}

	
	printf("%ld %ld %ld\n", hasil[0], hasil[1], hasil[2]);
	return 0;
}