#include <stdio.h>
inline void swap(a,b){a^=b;b^=a;a^=b;}

int main(){
	int x=10,y=20;
	swap(x,y);
	printf("%d %d\n",x,y);
	return 0;
}