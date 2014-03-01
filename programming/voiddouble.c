#include <stdio.h>
int main(){
	double d = 123.456789;	//double variable
	void *v;	//void pointer

	v = &d;		//void pointer v storing the address of d

	double p = *((double *) v);		//variable p taking the value of d through void pointer v

	printf("%lf", p);	//printing the value of d which is now stored in p
	return 0;
}