#include <stdio.h>

inline int bsrch(int *a,int n,int k){
	int s=0,e=n-1,m=(s+e)/2;
	while(s<=e&&*(a+m)!=k){
		if(k<*(a+m))e=m-1;
		else s=m+1;
		m=(s+e)/2;
	}
	if(s>e)
		return -1;
	return m;
}

int main(){
	int arr[], arr_size, elem;
	int index = bsrch(arr, arr_size, elem);
	return 0;
}