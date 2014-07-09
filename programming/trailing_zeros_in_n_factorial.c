/**
* File: trailing_zeros_in_n_factorial.c
* Description:
* This program will find the number of trailing zeros in n!
*
* Input
* First line takes an integer T <= 100, number of lines.
* Then T lines follows each containing exactly one integer N, where 1<=N<=1000000000.
*
* Output
* For each input display an integer denoting the number of trailing zeros.
*
*
* Input
* 4
* 1
* 5
* 10
* 100
*
* Output
* 0
* 1
* 2
* 24
*
*
* Author: Yusuf Shakeel
* Date: 09-July-2014 Wednesday
*/

#include <stdio.h>
int main(){
	unsigned int f[]={5,25,125,625,3125,15625,78125,390625,1953125,9765625,48828125,244140625};
	unsigned int t,n,c;
	int i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0,c=0;i<12;i++){
			if(f[i]>n){
				break;
			}else{
				c+=n/f[i];
			}
		}
		printf("%d\n",c);
	}
	return 0;
}