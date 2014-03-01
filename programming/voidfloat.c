#include <stdio.h>
int main(){
	float f = 12.34f;	//float variable
	void *v;		//void pointer

	v = &f;	//void pointer v storing the address of variable f

	float p = *((float *) v);	//variable p taking the value of f through void pointer v

	printf("%f", p);	//printing the value of f which is now stored in p
	return 0;
}