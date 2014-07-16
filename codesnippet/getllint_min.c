/*for long long int
*/

#include <stdio.h>
#define _gc() getchar_unlocked()

inline long long int getllint(){long long int x=0,c=_gc();while(!(c>='0'&&c<='9')){c=_gc();}while(c>='0'&&c<='9'){x=(x<<3)+(x<<1)+(c-'0');c=_gc();}return x;}

int main(){
	long long int x = getllint();
	printf("%lld\n", x);
	return 0;
}