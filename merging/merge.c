/*merge example
*/

#include <stdio.h>

//function declaration
void merge(int *a, int m, int *b, int n, int *c);

int main(){
	//variable declaration
	int a[3] = {1, 4, 6}, b[4] = {2, 3, 5, 7}, c[7], i;
	
	//merge
	merge(a, 3, b, 4, c);
	
	//output
	for(i = 0; i < 7; i++)
		printf("%d ", c[i]);
	printf("\nMerge complete.\n");
	
	return 0;
}

//function definition
void merge(int *a, int m, int *b, int n, int *c){
	int pa = 0, pb = 0, pc = 0;
	while(pa < m && pb < n){
		if(a[pa] < b[pb])
			c[pc++] = a[pa++];
		else
			c[pc++] = b[pb++];
	}
	if(pa == m)
		while(pb < n)	//Array A exhausted
			c[pc++] = b[pb++];
	else
		while(pa < m)	//Array B exhausted
			c[pc++] = a[pa++];
}
