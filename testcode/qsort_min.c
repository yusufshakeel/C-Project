#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b){return(*(int*)a-*(int*)b);}

int your_function_name(){
	int arr[], arr_size;
	qsort(arr, arr_size, sizeof(int), compare);
}