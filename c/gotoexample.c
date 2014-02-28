#include <stdio.h>
int main(){
	//declaring variable
	int i;

	//initializing i
	i=1;

	do{
		if(i==5)
			goto abc;	//when i is equal to 5 goto abc
		printf("%d\n",i);
		abc:
		i++;
	}while(i<=10);
	return 0;
}