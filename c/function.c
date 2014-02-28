#include <stdio.h>

//declaring functions
void square(int n);
void cube(int n);
float percent60(int n);

int main(){
	//declaring variable
	int n;

	//taking user input
	printf("Enter value of n: ");
	scanf("%d",&n);

	//function call
	square(n);
	cube(n);
	printf("60 percent of %d = %f\n",n,percent60(n));

	return 0;
}

//defining functions
void square(int n){
	printf("Square of %d = %d\n",n,n*n);
}

void cube(int n){
	printf("Cube of %d = %d\n",n,n*n*n);
}

float percent60(int n){
	return 0.6*n;
}