#include <stdio.h>
int main(){
	//declaring variables
	int i,sum = 0;
	int num[5];

	//reading user input
	for(i = 0; i < 5; i++)
	{
	      scanf("%d",&num[i]);
  	      sum += num[i];	//calculating sum
	}
	
	printf("Sum = %d",sum);
	return 0;
}
