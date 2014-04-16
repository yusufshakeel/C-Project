#include <stdio.h>
int gcd(int x, int y);

int main(){
	int a, b, g;

	printf("Enter a and b:\n");
	scanf("%d%d", &a, &b);

	//gcd
	g = gcd(a, b);

	//in case g is negative, then convert it into positive
	if(g < 0){
		g *= -1;
	}

	//output
	printf("GCD(%d, %d) = %d\n", a, b, g);
	return 0;
}

int gcd(int x, int y){
	if(y == 0) return x;
	else gcd(y, x%y);
}