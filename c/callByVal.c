/*call by value example
*/

#include <stdio.h>

//function declaration
void callByVal(int,int);

int main(){
	//variable declaration
	int x,y;
	
	//variable initialization
	x=10;
	y=20;
	
	//before swap
	printf("Value before swap: x=%d\ty=%d\n",x,y);
	
	//call
	callByVal(x,y);	//passing values
	
	//after swap
	printf("Value after swap: x=%d\ty=%d\n",x,y);
	return 0;
}

//function definition
void callByVal(int x,int y){
	int t=x;
	x=y;
	y=t;
	printf("From call by value\n");
	printf("x=%d\ty=%d\n",x,y);
}