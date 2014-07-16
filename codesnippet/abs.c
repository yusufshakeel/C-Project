#include <stdio.h>
#include <limits.h>

int main(){
	int v,m;
	unsigned int r;

	v=-10;
	m=v>>sizeof(int)*CHAR_BIT-1;
	r=(v+m)^m;
	printf("%u",r);
	
	return 0;
}