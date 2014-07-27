#include <stdio.h>
inline int powx(int x,int y){int r=1,b;while(y){if(y&1)r*=b;b*=b;y>>=1;}return r;}

int main(){
	int a = powx(2,8);	
	return 0;
}