#include <stdio.h>
#include <limits.h>

inline int max(int x,int y){return x-((x-y)&((x-y)>>(sizeof(int)*CHAR_BIT-1)));}
inline int min(int x,int y){return y+((x-y)&((x-y)>>(sizeof(int)*CHAR_BIT-1)));}

int main(){
	int x,y;

	x=10;
	y=20;
	printf("max=%d\n",max(x,y));
	printf("min=%d\n",min(x,y));
	return 0;
}