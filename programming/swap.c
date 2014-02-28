/*swap two numbers without using third variable
*/

#include <stdio.h>

int main(){
	//variables
	int x, y;
	
	//input
	printf("Enter value of x and y: ");
	scanf("%d%d", &x, &y);
	
	//swap
	x = x + y;
	y = x - y;
	x = x - y;
	
	//output
	printf("x = %d y = %d\n", x, y);
	return 0;
}
