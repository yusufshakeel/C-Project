#include <stdio.h>
int main(){
	//declaring variables
	int r,c;
	int arr[3][3];

	//reading user input
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			scanf("%d",&arr[r][c]);
		}
	}

	printf("Even numbers\n");	//printing all the even numbers
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			if(arr[r][c]%2==0){
				printf("%d\t",arr[r][c]);
			}
		}
	}
	return 0;
}