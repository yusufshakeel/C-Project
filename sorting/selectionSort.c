/*selection sort example
*/

#include <stdio.h>

//function declaration
void selectionSort(int *a, int n);

int main(){
	//variable declaration
	int arr[5], i;
	
	//input
	for(i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	
	//sort
	selectionSort(arr, 5);	//passing arr address and no. of elements
	
	//output
	for(i = 0; i < 5; i++)
		printf("%d\n", arr[i]);
		
	return 0;
}

//function definition
void selectionSort(int *a, int n){
	int k, j, pos, small, temp;
	for(k = 1; k <= n-1; k++){
		small = a[k-1];
		pos = k-1;
		for(j = k; j <= n-1; j++){
			if(a[j] < small){
				small = a[j];
				pos = j;
			}
		}
		if(pos != k-1){
			temp = a[k-1];
			a[k-1] = a[pos];
			a[pos] = temp;
		}
	}
}