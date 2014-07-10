/*For integers
*/

#include <stdio.h>
#define _gc() getchar_unlocked()
#define _pc(x) putchar_unlocked(x);

inline int getint(){int x=0;register int c=_gc();while(!(c>='0'&&c<='9')){c=_gc();}while(c>='0'&&c<='9'){x=(x<<3)+(x<<1)+(c-'0');c=_gc();}return x;}
inline void putint(int n){int N=n,r=n,c=0;if(N==0){_pc('0');_pc('\n');return;}while(r%10==0){c++;r/=10;}r=0;while(N!=0){r=(r<<3)+(r<<1)+N%10;N/=10;}while(r!=0){_pc(r%10+'0');r/=10;}while(c--){_pc('0');}_pc('\n');}

int main(){
	int x = getint();
	putint(x);
}