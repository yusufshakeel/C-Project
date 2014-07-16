#include <stdio.h>

inline int lsrchint(int *a,int n,int k){int i;for(i=0;i<n;i++){if(*(a+i)==k)return i;}return -1;}

inline long int lsrchlint(long int *a,long int n,long int k){long int i;for(i=0;i<n;i++){if(*(a+i)==k)return i;}return -1;}

inline long long int lsrchllint(long long int *a,long long int n,long long int k){long long int i;for(i=0;i<n;i++){if(*(a+i)==k)return i;}return -1;}

int main(){
	int arr[], arr_size, elem;
	int index = lsrchint(arr,arr_size,elem);
	return 0;
}