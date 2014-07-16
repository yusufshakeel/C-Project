#include <stdio.h>

/*return 0 if false 1 if true*/
inline int isdesc(const int *a,int n){register int i;for(i=0;i<n-1;i++){if(*a<*(a+i))return 0;}return 1;}

int main(){
    int arr[], arr_size;
    printf("%d",isdesc(arr, arr_size));
    return 0;
}
