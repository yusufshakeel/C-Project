#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int r;

	//initialize random
	srand(time(NULL));

	//generate random number
	//find mod 2
	//result either 0 or 1
	r = rand() % 2;

	//output
	printf("Random Number either 0 or 1: %d", r);
	return 0;
}