/*for long long int
*/
#include <stdio.h>
#define _pc(x) putchar_unlocked(x);

inline void putllint(long long int n){long long int num=n,rev=n,c=0;if(num==0){_pc('0');_pc('\n');return;}while(rev%10==0){c++;rev/=10;}rev = 0;while(num!=0){rev=(rev<<3)+(rev<<1)+num%10;num/=10;}while(rev!=0){_pc(rev%10+'0');rev/=10;}while(c--){_pc('0');}_pc('\n');}

int main(){
	long long int n = 123456;
	putllint(n);
	return 0;
}