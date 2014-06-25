#include <stdio.h>

int main(){
	int x, y;

	//input
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);

	//swap
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;

	printf("After swap:\nx = %d\ny = %d\n", x, y);
	return 0;
}