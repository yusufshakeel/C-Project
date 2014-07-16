#include <stdio.h>
int main(){
	int x,y,s;

	//same sign
	x=y=1;
	s=(x^y<0);		// if 1 then same sign else 0
	printf("%d\n",s);

	//opposite sign
	x=1;
	y=-1;
	s=(x^y<0);		// if 1 then same sign else 0
	printf("%d\n",s);
	
	//any one is zero
	x=0;
	y=1;
	s=(x^y<0);		// if 1 then same sign else 0
	printf("%d\n",s);
	
	x=0;
	y=-1;
	s=(x^y<0);		// if 1 then same sign else 0
	printf("%d\n",s);
	
	return 0;
}