/*factorial declaration
recursive and non-recursive
*/

#include <stdio.h>

//function declaration
int fact(int n);
int nonRecFact(int n);

int main(){
	//variable declaration
	int n, f;
	
	//input
	printf("Enter n:  ");
	scanf("%d", &n);
	
	//recursive fact
	f = fact(n);
	printf("Recursive fact: %d\n", f);
	
	//non-recursive fact
	f = nonRecFact(n);
	printf("Non-Recursive fact: %d\n", f);
	
	return 0;
}

//function definition
int fact(int n){
	if(n == 0 || n == 1)
		return 1;
	else
		return n * fact(n-1);
}

int nonRecFact(int n){
	int i, f = 1;
	for(i = 1; i <= n; i++)
		f *= i;
	return f;
}
