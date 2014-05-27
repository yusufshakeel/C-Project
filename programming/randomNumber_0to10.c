#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int r;

	//initialize random
	srand(time(NULL));

	//generate random number
	//find mod 11
	//result from 0 to 10
	r = rand() % 11;

	//output
	printf("Random Number from 0 to 10: %d", r);
	return 0;
}