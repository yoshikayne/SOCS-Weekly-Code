#include <stdio.h>

int main(){
	float price, weight, total;
	scanf("%f %f", &price, &weight); getchar();
	
	total = (weight/1000) * price;
	
	printf("%.2f\n", total);
	
	return 0;
}