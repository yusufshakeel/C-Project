/*bubble sort example
*/

#include <stdio.h>

//function declaration
void bubbleSort(int *a, int n);

int main(){
	//variable declaration
	int arr[5], i;
	
	//input
	for(i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	
	//sort
	bubbleSort(arr,5);	//sending arr address and no. of elements
	
	//output
	for(i = 0; i < 5; i++)
		printf("%d\n", arr[i]);
		
	return 0;
}

//function definition
void bubbleSort(int *a, int n){
	int k, j, temp;
	for(k = 1; k <= n-1; k++){
		for(j = 0; j <= n-k-1; j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}