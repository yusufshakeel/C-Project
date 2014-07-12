#include <stdio.h>

inline int bsrch(int *a,int n,int k){int s=0,e=n-1,m=(s+e)/2;while(s<=e&&*(a+m)!=k){if(k<*(a+m))e=m-1;else s=m+1;m=(s+e)/2;}if(s>e)return -1;return m;}

inline long int bsrchlint(long int *a,long int n,long int k){long int s=0,e=n-1,m=(s+e)/2;while(s<=e&&*(a+m)!=k){if(k<*(a+m))e=m-1;else s=m+1;m=(s+e)/2;}if(s>e)return -1;return m;}

inline long long int bsrchllint(long long int *a,long long int n,long long int k){long long int s=0,e=n-1,m=(s+e)/2;while(s<=e&&*(a+m)!=k){if(k<*(a+m))e=m-1;else s=m+1;m=(s+e)/2;}if(s>e)return -1;return m;}

inline int bsrchfloat(float *a,int n,float k){int s=0,e=n-1,m=(s+e)/2;while(s<=e&&*(a+m)!=k){if(k<*(a+m))e=m-1;else s=m+1;m=(s+e)/2;}if(s>e)return -1;return m;}

inline int bsrchdouble(double *a,int n,double k){int s=0,e=n-1,m=(s+e)/2;while(s<=e&&*(a+m)!=k){if(k<*(a+m))e=m-1;else s=m+1;m=(s+e)/2;}if(s>e)return -1;return m;}


int main(){
	int arr[], arr_size, elem;
	int index = bsrch(arr, arr_size, elem);
	return 0;
}