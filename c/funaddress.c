/*function returning address
*/

#include <stdio.h>

//function declaration
char *funChar(char *, char *);
int *funInt(int *, int *);

int main(){
	//variable declaration
	char ch1, ch2;
	int i1, i2;
	
	//pointer variable declaration
	char *cptr;
	int *iptr;
	
	//variable initialization
	ch1 = 'a', ch2 = 'b';
	i1 = 10, i2 = 20;
	
	//calling function and printing bigger value
	cptr = funChar(&ch1, &ch2);	//sending address
	printf("%c\n", *cptr);		//printing value at the address
	
	iptr = funInt(&i1, &i2);
	printf("%d\n", *iptr);
	
	return 0;
}

//function definition
char *funChar(char *x, char *y){
	if(*x > *y)
		return x;	//return address stored in x
	else if(*y > *x)
		return y;	//return address stored in y
	return x;		//same value so return any one
}

int *funInt(int *x, int *y){
	if(*x > *y)
		return x;	//return address stored in x
	else if(*y > *x)
		return y;	//return address stored in y
	return x;		//same value so return any one
}