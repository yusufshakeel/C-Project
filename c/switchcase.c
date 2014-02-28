#include <stdio.h>
int main(){
	//declaring variable n
	int n;

	//reading value of n
	scanf("%d",&n);

	//checking
	switch(n){
		case 1: printf("ONE"); break;
		case 2: printf("TWO"); break;
		case 3: printf("THREE"); break;
		default: printf("Some other number");
	}
	return 0;
}