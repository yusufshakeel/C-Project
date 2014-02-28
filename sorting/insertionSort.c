/*insertion sort example
*/

#include <stdio.h>

//function declaration
void insertionSort(int *a, int n);

int main(){
	//variable declaration
	int arr[5], i;
	
	//input
	for(i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	
	//sort
	insertionSort(arr, 5);	//passing arr address and no. of elements
	
	//output
	for(i = 0; i < 5; i++)
		printf("%d\n", arr[i]);
		
	return 0;
}

//function definition
void insertionSort(int *a, int n){
	int k, j, temp;
	for(k = 1; k <= n-1; k++){
		temp = a[k];
		j = k-1;
		while(temp < a[j] && j >= 0){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
}