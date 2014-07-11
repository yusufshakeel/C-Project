/*binary search example
*/

#include <stdio.h>

//function declaration
int binarySearch(int *a, int n, int key);

int main(){
	//variable declaration
	int arr[10], i, key;
	
	//input
	printf("Enter elements of the array: ");
	for(i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	printf("Enter key: ");
	scanf("%d", &key);
	
	//search
	i = binarySearch(arr, 10, key);
	
	//output
	if(i == -1)
		printf("Key not found.\n");
	else
		printf("Key at index: %d\n", i);
		
	return 0;
}

//function definition
int binarySearch(int *a, int n, int key){
	int start = 0, end = n - 1, mid = (start + end) / 2;
	while(start <= end && a[mid] != key){
		if(key < a[mid])
			end = mid - 1;
		else
			start = mid + 1;
		mid = (start + end) / 2;
	}
	if(start > end)
		return -1;	//key not found
	return mid;
}
