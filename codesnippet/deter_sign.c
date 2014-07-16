#include <stdio.h>
#include <limits.h>

int main(){
	int v;	//value
	int s;	//sign

	//general
	v=-1;
	s=-(v<0);	//if v<0 then -1 else 0
	printf("%d\n",s);

	v=0;
	s=-(v<0);	//if v<0 then -1 else 0
	printf("%d\n",s);

	v=1;
	s=-(v<0);	//if v<0 then -1 else 0
	printf("%d\n",s);

	//without branching
	v=-1;
	s=-(int)((unsigned int)((int)v)>>(sizeof(int)*CHAR_BIT-1));
	printf("%d\n",s);

	v=0;
	s=-(int)((unsigned int)((int)v)>>(sizeof(int)*CHAR_BIT-1));
	printf("%d\n",s);

	v=1;
	s=-(int)((unsigned int)((int)v)>>(sizeof(int)*CHAR_BIT-1));
	printf("%d\n",s);

	//faster without portability
	v=-1;
	s=v>>(sizeof(int)*CHAR_BIT-1);
	printf("%d\n",s);

	v=0;
	s=v>>(sizeof(int)*CHAR_BIT-1);
	printf("%d\n",s);

	v=1;
	s=v>>(sizeof(int)*CHAR_BIT-1);
	printf("%d\n",s);

	return 0;
}