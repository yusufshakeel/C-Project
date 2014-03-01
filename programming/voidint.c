#include <stdio.h>
int main(){
	int i = 10;	//int variable storing the value 10
	void *v;	//void pointer

	v = &i;		//void pointer v storing the address of variable i

	int p = *((int *) v);	//variable p taking the value of i through void pointer v

	printf("%d",p);	//printing the value of i which is now stored in p
	return 0;
}