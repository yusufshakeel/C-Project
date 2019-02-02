#include <stdio.h>
int gcd(int a,int b)
return (a==0 ? b : gcd(b%a,a);
int main(){
	int a, b, g;

	printf("Enter a and b:\n");
	scanf("%d%d", &a, &b);
	if(a<0) a=-a;
	if(b<0) b=-b;

	//gcd
	g = gcd(a, b);
	//output
	printf("GCD(%d, %d) = %d\n", a, b, g);
	return 0;
}
