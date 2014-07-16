#include <stdio.h>

//return 1 if power of 2 else 0.
inline int ispowof2(unsigned int v){return v&&!(v&(v-1));}

int main(){
	int x=3;
	printf("%d\n",ispowof2(x));

	x=4;
	printf("%d\n",ispowof2(x));
	return 0;
}