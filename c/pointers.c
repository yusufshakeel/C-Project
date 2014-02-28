#include <stdio.h>
int main(){
	//variables
	char ch = 'a';
	int i = 123;
	float f = 12.34;
	double d = 123.456789;

	//pointer variables
	char *cptr = &ch;
	int *iptr = &i;
	float *fptr = &f;
	double *dptr = &d;

	//void pointer variable
	void *vptr = &i;

	//printing address and value
	printf("char\taddress: %u\tvalue: %c\n",cptr,*cptr);
	printf("int\taddress: %u\tvalue: %d\n",iptr,*iptr);
	printf("float\taddress: %u\tvalue: %f\n",fptr,*fptr);
	printf("double\taddress: %u\tvalue: %lf\n",dptr,*dptr);

	//printing void pointer address and value
	printf("void\taddress: %u\tvalue: %d\n",vptr,*((int*)vptr));
	return 0;
}