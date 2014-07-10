#include <stdio.h>
#define _pc(x) putchar_unlocked(x);

inline void putint(int n){int N=n,r=n,c=0;if(N==0){_pc('0');_pc('\n');return;}while(r%10==0){c++;r/=10;}r=0;while(N!=0){r=(r<<3)+(r<<1)+N%10;N/=10;}while(r!=0){_pc(r%10+'0');r/=10;}while(c--){_pc('0');}_pc('\n');}

int main(){
	int n = 123456;
	putint(n);
	return 0;
}