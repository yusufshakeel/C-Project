#include <stdio.h>
#define _gc() getchar_unlocked()
#define _pc(x) putchar_unlocked(x)
#define NL() putchar_unlocked('\n')
#define SS(x) scanf("%s",&x)
#define PS(x) printf("%s",x)
#define SC(x) scanf("%c",&x)
#define PC(x) scanf("%c",x)

typedef long long int I;
inline I getint(){I x=0,c=_gc();while(!(c>='0'&&c<='9')){c=_gc();}while(c>='0'&&c<='9'){x=(x<<3)+(x<<1)+(c-'0');c=_gc();}return x;}
inline void putint(I n){I N=n,r=n,c=0;if(N==0){_pc('0');return;}while(r%10==0){c++;r/=10;}r=0;while(N!=0){r=(r<<3)+(r<<1)+N%10;N/=10;}while(r!=0){_pc(r%10+'0');r/=10;}while(c--){_pc('0');}}


int main(){

	return 0;
}