/**
 * Quick Sort
 * author: yusuf shakeel	date: 21-10-2012
 */

#include <stdio.h>

void partitionArray(int *j, int beg, int end, int *pivotLoc);
void quickSort(int *j, int beg, int end);

int main(){
    int k;
	printf("How many elements?\t");
	scanf("%d",&k);
	int i,j[k];
	for(i=0;i<k;i++){
	    scanf("%d",&j[i]);
	}
	quickSort(j, 0, k-1);	//beg = 0 start index of array end = 5 last index of array
	//printing sorted element of array
	for(i = 0; i < k; i++){
		printf("%d\t", j[i]);
	}
	return 0;
}//main() ends here

void quickSort(int *j, int beg, int end){
	int pivotLoc;
	if(beg < end){
		partitionArray(j, beg, end, &pivotLoc);	//this will find the pivot location and partition the array
		quickSort(j, beg, pivotLoc - 1);	//quick sort the left sub array
		quickSort(j, pivotLoc + 1, end);	//quick sort the right sub array
	}
}//quickSort() ends here

void partitionArray(int *j, int beg, int end, int *pivotLoc){
	int left = beg;		//initially left point to the first element of the array
	int right = end;	//initially right point to the last element of the array
	*pivotLoc = left;	//initially pivot point to first element of the array
	int tmp;	//used for swapping values

	while(1){

		//pivot pointing at left
		while(j[*pivotLoc] <= j[right] && *pivotLoc != right){	//pivot element <= right element
			right--;	//move right one position towards left
		}

		if(*pivotLoc == right){	//both left and right pointing at same element of the array
			break;
		}else if(j[*pivotLoc] > j[right]){
			//pivot element greater than right element. swap pivot and right element.
			tmp = j[right];
			j[right] = j[*pivotLoc];
			j[*pivotLoc] = tmp;
			*pivotLoc = right;	//pivot is now pointing to right
		}

		//pivot pointing to right
		while(j[*pivotLoc] >= j[left] && *pivotLoc != left){	//pivot element >= left element
			left++;		//move left one position towards right
		}

		if(*pivotLoc == left){	//both left and right pointing at the same element of the array
			break;
		}else if(j[*pivotLoc] < j[left]){
			//pivot element smaller than left element. swap pivot and left element.
			tmp = j[left];
			j[left] = j[*pivotLoc];
			j[*pivotLoc] = tmp;
			*pivotLoc = left;	//pivot is now pointing to left
		}
	}
}//partitionArray() ends here
