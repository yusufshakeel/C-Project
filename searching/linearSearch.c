/*linear search example
*/

#include <stdio.h>

//function declaration
int linearSearch(int *a, int n, int key);

int main(){
	//variable declaration
	int arr[5], i, key;
	
	//input
	printf("Enter the array elements: ");
	for(i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	printf("Enter key: ");
	scanf("%d", &key);
	
	//search
	i = linearSearch(arr, 5, key);
	
	//output
	if(i == -1)
		printf("Key not found.\n");
	else
		printf("Key at index: %d\n", i);
		 	
	return 0;
}

//function definition
int linearSearch(int *a, int n, int key){
	int i;
	for(i = 0; i <= n-1; i++){
		if(a[i] == key)
			return i;
	}
	return -1;
}
