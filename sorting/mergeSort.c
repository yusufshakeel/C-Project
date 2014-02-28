#include <stdio.h>
#define SIZE 6	//array size


//function declaration
void mergeSort(int *a, int beg, int end);
void mergeSortedArray(int *a, int lbeg, int lend, int rbeg, int rend);	//l = left sub array and r = right sub array

int main(){
	int a[SIZE] = {5,4,3,1,2,6};	//array to sort in  ascending order
	int i;
	mergeSort(a, 0, SIZE-1);	//beg = 0 and end = 5
	for(i = 0; i < SIZE; i++){
		printf("%d\t", a[i]);
	}
	return 0;
}

void mergeSort(int *a, int beg, int end){
	int mid;
	if(beg < end){
		mid = (beg+end)/2;
		mergeSort(a, beg, mid);
		mergeSort(a, mid+1, end);
		mergeSortedArray(a, beg, mid, mid+1, end);
	}
}

void mergeSortedArray(int *a, int lbeg, int lend, int rbeg, int rend){
	int pa = lbeg, pb = rbeg, pt = lbeg, tmp[SIZE];
	while(pa <= lend && pb <= rend){
		if(a[pa] < a[pb]){
			tmp[pt++] = a[pa++];
		}else{
			tmp[pt++] = a[pb++];
		}
	}
	if(pa > lend){
		while(pb <= rend){	//left sub array exhausted
			tmp[pt++] = a[pb++];
		}
	}else{
		while(pa <= lend){	//right sub array exhausted
			tmp[pt++] = a[pa++];
		}
	}
	
	//write sorted element in array a
	for(pt = lbeg; pt <= rend; pt++){
		a[pt] = tmp[pt];
	}
}