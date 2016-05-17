#include <stdio.h>
//recursive function for gcd of two numbers.
int gcd(int x, int y);


//iterative function for gcd of two numbers.
int gcd_iter(int u , int v);
int main(){
	int a, b, g, f;

	printf("Enter a and b:\n");
	scanf("%d%d", &a, &b);

	//gcd
	g = gcd(a, b);

	//gcd_iter
	f=gcd_iten(a, b);

	//in case g is negative, then convert it into positive
	if(g < 0){
		g *= -1;
	}

	//in case f is negative, then convert it into positive
	if(f < 0){
		f=f*(-1);
	}

	//output
	printf("Recursive GCD(%d, %d) = %d\n", a, b, g);
	printf("Iterative GCD(%d, %d) = %d\n", a, b, f);
	return 0;
}

int gcd(int x, int y){
	if(y == 0) return x;
	else gcd(y, x%y);
}


int gcd_iter(int u, int v){
	int t;
	while (v) {
		t = u; 
		u = v; 
		v = t % v;
	}
	return u < 0 ? -u : u; /* abs(u) */
}
