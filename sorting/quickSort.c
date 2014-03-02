/**
 * Quick Sort
 * author: yusuf shakeel	date: 21-10-2012
 */

#include <stdio.h>
#define SIZE 6	//array size


void partitionArray(int *a, int beg, int end, int *pivotLoc);
void quickSort(int *a, int beg, int end);

int main(){
	int a[SIZE] = {5,2,6,1,3,4};	//unsorted array
	int i;

	quickSort(a, 0, SIZE-1);	//beg = 0 start index of array end = 5 last index of array

	//printing sorted element of array
	for(i = 0; i < SIZE; i++){
		printf("%d\t", a[i]);
	}
	return 0;
}//main() ends here

void quickSort(int *a, int beg, int end){
	int pivotLoc;
	if(beg < end){
		partitionArray(a, beg, end, &pivotLoc);	//this will find the pivot location and partition the array
		quickSort(a, beg, pivotLoc - 1);	//quick sort the left sub array
		quickSort(a, pivotLoc + 1, end);	//quick sort the right sub array
	}
}//quickSort() ends here

void partitionArray(int *a, int beg, int end, int *pivotLoc){
	int left = beg;		//initially left point to the first element of the array
	int right = end;	//initially right point to the last element of the array
	*pivotLoc = left;	//initially pivot point to first element of the array
	int tmp;	//used for swapping values

	while(1){

		//pivot pointing at left
		while(a[*pivotLoc] <= a[right] && *pivotLoc != right){	//pivot element <= right element
			right--;	//move right one position towards left
		}

		if(*pivotLoc == right){	//both left and right pointing at same element of the array
			break;
		}else if(a[*pivotLoc] > a[right]){
			//pivot element greater than right element. swap pivot and right element.
			tmp = a[right];
			a[right] = a[*pivotLoc];
			a[*pivotLoc] = tmp;
			*pivotLoc = right;	//pivot is now pointing to right
		}

		//pivot pointing to right
		while(a[*pivotLoc] >= a[left] && *pivotLoc != left){	//pivot element >= left element
			left++;		//move left one position towards right
		}

		if(*pivotLoc == left){	//both left and right pointing at the same element of the array
			break;
		}else if(a[*pivotLoc] < a[left]){
			//pivot element smaller than left element. swap pivot and left element.
			tmp = a[left];
			a[left] = a[*pivotLoc];
			a[*pivotLoc] = tmp;
			*pivotLoc = left;	//pivot is now pointing to left
		}
	}
}//partitionArray() ends here