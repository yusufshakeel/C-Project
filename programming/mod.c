/*finding modulus without using modulus operator
*/

#include <stdio.h>

int main(){
	//variables
	int x, n, p, q, m;
	
	//input
	printf("Enter x and n: ");
	scanf("%d%d", &x, &n);
	
	//mod
	q = x / n;	//finding quotient (integer part only)
	p = q * n;	//finding product
	m = x - p;	//finding modulus
	
	//output
	printf("Modulus: %d\n", m);
	return 0;
}
