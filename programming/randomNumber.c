#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int r;

	//initialize random
	srand(time(NULL));

	//generate random number
	r = rand();

	//output
	printf("Random Number: %d", r);
	return 0;
}