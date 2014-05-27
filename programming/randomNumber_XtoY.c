#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int r;
	int x = 10;
	int y = 20;
	int diff = y - x;

	//initialize random
	srand(time(NULL));

	//generate random number
	//find mod diff+1
	//add x
	//result from 10 to 20
	r = rand() % (diff + 1) + x;

	//output
	printf("Random Number from 10 to 20: %d", r);
	return 0;
}