#include <stdio.h>
int main(){
	//declaring variables
	char ch;
	int i;
	float f;
	double d;

	//reading data
	scanf("%c %d %f %lf",&ch,&i,&f,&d);

	//printing data
	printf("%c %d %f %lf",ch,i,f,d);
	return 0;
}