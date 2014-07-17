#include <stdio.h>
#include <time.h>

int main(){
	clock_t t_start, t_end;
	long long int i;
	double t_total;
	t_start = clock();
	for(i=0;i<1000000000;i++);	//delay
	t_end = clock();
	t_total = (double)(t_end - t_start)/CLOCKS_PER_SEC;

	printf("Start Time: %ld\n", t_start);
	printf("End Time: %ld\n", t_end);
	printf("Total Time: %f\n", t_total);
	return 0;
}